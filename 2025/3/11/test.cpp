// shit 没写完的
#include <stdio.h>

int main(){

    int metanumber, temp, result, number[2];

    printf("Enter a number:");
    scanf("%d",&metanumber);

    number[0] = metanumber/100;
    number[1] = metanumber/10- 10*number[0];
    number[2] = metanumber % 10;

    for (int i = 0; i < 2; i++)
    {
        if (number[i+1] < number[i])
        {
            temp = number[i+1];
            number[i+1] = number[i];
            number[i] = temp;
        }else
        {
            continue;
        }
    }

    result = number[0]*100 + number[1]*10 + number[2];


    return 0;
}
