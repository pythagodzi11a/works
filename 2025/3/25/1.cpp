#include <stdio.h>

int main() {

    int i,j,people[12],sumNumber[6],max=0;

    for (i = 0; i < 12; i++)
    {
        scanf("%d",&people[i]);
    }

    for ( i = 0; i < 8 ;  i++)
    {
        for ( j = i; j < i+6; j++)
        {
            sumNumber[i] += people[j];
        }
    }

    for ( i = 0; i < 6; i++)
    {
        if (sumNumber[i] > max)
        {
            max = i;
        }
    }
    
    printf("%d",max+1);

    return 0;
}