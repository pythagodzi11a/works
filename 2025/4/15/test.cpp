#include <stdio.h>
#include <math.h>

int function(int *array, int number)
{
    int i, result = 0;
    double sum = 0.0;
    for (i = 0; i < number; i++)
    {
        sum += array[i];
    }

    for (i = 0; i < number; i++)
    {

        if(array[i] <= (double)sum/number)
        {
            result ++;
        }
    }

    return result;
}

int main()
{
    int array[1005] = {0}, i, number,result;

    scanf("%d", &number);

    for (i = 0; i < number; i++)
    {
        array[i] = 600*cos(i*0.35);
    }


    result = function(array, number);

    printf("%d", result);

    return 0;
}
