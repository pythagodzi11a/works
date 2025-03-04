#include <stdio.h>

int main(){
    int firstNumber, secondNumber, thirdNumber;
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber <= secondNumber && firstNumber <= thirdNumber)
    {
        printf("TRUE");
        /* code */
    }else
    {
        printf("FALSE");
    }


    return 0;
}
