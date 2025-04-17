#include <stdio.h>

int negative(int *array, int number)
{
    int i;
    for (i = 0; i < number; i++)
    {

        array[i] = -array[i];
    }
    return 0;
}

int main()
{

    int number, array[1000], i;

    scanf("%d", &number);

    for (i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    negative(array, number);

    for (i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
