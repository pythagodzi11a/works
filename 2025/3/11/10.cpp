#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
    int j;

    for (j = 2; j < number; j++)
    {
        if (number % j == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    int i, number, result1;

    scanf("%d", &number);

    for (i = 2; i < number; i++)
    {
        if (isPrime(i) && isPrime(number - i))
        {
            printf("%d=%d+%d", number, i, number - i);
            break;
        }
    }

    return 0;
}
