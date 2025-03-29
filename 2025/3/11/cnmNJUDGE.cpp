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
    printf("1/%d",lai[n-1][m-1]);
    return 0;
}
