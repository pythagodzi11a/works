#include <stdio.h>

int main() {

    int N,M,i,j;

    scanf("%d %d",&N,&M);

    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < i+1; j++)
        {
            printf("%d",M);
        }
        printf("\n");
    }

    return 0;
}
