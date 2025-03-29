// shit 没写完的
#include <stdio.h>

int main(){

    int metanumber, temp, result, number[2];

    printf("Enter a number:");
    scanf("%d",&metanumber);

    number[0] = metanumber/100;
    number[1] = metanumber/10- 10*number[0];
    number[2] = metanumber % 10;

    for (int i = 0; i < 2; i++)
    {
        if (number[i+1] < number[i])
        {
            temp = number[i+1];
            number[i+1] = number[i];
            number[i] = temp;
        }else
        {
            continue;
        }
    }

    result = number[0]*100 + number[1]*10 + number[2];


    return 0;
}


/*#include <stdio.h>
int main(){
    int i,j,n,m,lai[16][16];

    scanf("%d %d",&n,&m);

    lai[0][0] = 1;
    lai[1][0] = 2;
    lai[1][1] = 2;
    lai[2][0] = 3;
    lai[2][1] = 6;
    lai[2][2] = 3;

    for (i = 2;i<16;i++){
        lai[i][0]=i+1;
    }

    for (i = 2;i<16;i++){
        lai[i][1]=(lai[i-1][0]*lai[i][0])/(lai[i][0]-lai[i-1][0]);
    }


        for (i = 2;i<16;i++){
            for (j = 0;j<i+1;j++){
            lai[i][j+1]=(lai[i-1][j]*lai[i][j])/(lai[i][j]-lai[i-1][j]);
        }
    }

    for(i =0;i<16;i++){
        printf("\n");
        for ( j = 0; j <= i; j++)
        {
            printf("%d ",lai[i][j]);
        }

    }

    printf("1/%d",lai[n-1][m-1]);
    return 0;
}
*/

#include <stdio.h>
#include <math.h>

int lai(int n,int m)
{
	int ans1=1,ans2=1,i;
	if(m==1) printf("1/%d",n);
	else
	{
		for(i=1;i<=m-1;i++)
			ans1*=i;
		for(i=1;i<=m;i++)
		{
			ans2*=n;
			n--;
		}
	}

	return ans2/ans1;
}

int main(){
    int i,j;
    for(i =0;i<16;i++){
        printf("\n");
        for ( j = 0; j <= i; j++)
        {
            printf("%d ",lai(i,j));
        }

    }

}
