#include <stdio.h>

int negative(int *array, int number)
{
    int i,result = 0;
    for (i = 0; i < number; i++)
    {

        result += array[i];
    }
    return result;
}

int main()
{

    int number, array[1000], i,result;

    scanf("%d", &number);

    for (i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    result = negative(array, number);

    printf("%d", result);

    return 0;
}
