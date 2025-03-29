#include <stdio.h>
#include <math.h>

int main()
{

    int j, i, number[100], count, temp;

    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count - i; j++)
        {
            if (abs(number[j]) > abs(number[j + 1]))
            {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    for (i = count - 1; i >= 0; i--)
    {
        printf("%d\n", number[i]);
    }

    return 0;
}
