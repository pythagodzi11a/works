#include <stdio.h>

int main() {

    int number,getNum[300],i,j,temp;

    scanf("%d",&number);

    for (i = 0; i < number; i++)
    {
        scanf("%d",&getNum[i]);
    }

    for (i = 0; i < number - 1; i++)
    {
        for (j = 0; j < number - i - 1; j++)
        {
            if (getNum[j] > getNum[j+1])
            {
                temp = getNum[j];
                getNum[j] = getNum[j+1];
                getNum[j+1] = temp;
            }
        }

    }

    for (i = 0; i < number; i++)
    {
        printf("%d ",getNum[i]);
    }


    return 0;
}
