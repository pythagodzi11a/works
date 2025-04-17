#include <stdio.h>
#include <math.h>

int main()
{
    int array[1005] = {0}, i, number,result,*p = array;

    scanf("%d", &number);

    for (i = 0; i < number; i++)
    {
        *(p+i) = 600*cos(i*0.35);
    }

    for (i = 0; i < number; i++)
    {
        printf("%d ", *(p+i));
    }


    return 0;
}
