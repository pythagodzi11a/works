#include <stdio.h>
int main(){

    int firstNumber, secondNumber, thirdNumber;
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);
    if (firstNumber > secondNumber && firstNumber > thirdNumber)
    {
        printf("%d", firstNumber);
    }
    else if (secondNumber > firstNumber && secondNumber > thirdNumber)
    {
        printf("%d", secondNumber);
    }
    else
    {
        printf("%d", thirdNumber);
    }
    return 0;
}
