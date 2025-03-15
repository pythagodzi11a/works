#include <stdio.h>

int main() {

    int m,n,i,j,MAX,MIN,num[51][51];
    scanf("%d %d",&m,&n);

    for (i = 0; i < m;i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    MAX = num[0][0];
    MIN = num[0][0];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (num[i][j] > MAX)
            {
                MAX = num[i][j];
            }
            if (num[i][j] < MIN)
            {
                MIN = num[i][j];
            }
        }
    }

    printf("%d",MAX-MIN);
    return 0;
}
