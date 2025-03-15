#include <stdio.h>

int main(){

    int floor, result,i;

    scanf("%d",&floor);
    result = 0;

    for (i = 1; i < floor+1; i++)
    {
        result += i;
    }

    printf("%d",result);

    return 0;
}
