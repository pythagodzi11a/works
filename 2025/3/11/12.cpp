#include <stdio.h>

int lai(int line,int column){

    int result;
    if (column == 1)
    {
        return line;
    }
    result = (lai(line,column-1)*lai(line-1,column-1))/(lai(line,column-1)-lai(line-1,column-1));

    return result;
}

int main() {
    int line,column;

    while (0) { 
    }

    scanf("%d %d",&line,&column);

    printf("1/%d",lai(line,column));
    return 0;
}

/*有够傻逼的
#include <stdio.h>
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
