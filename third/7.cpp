#include <stdio.h>

int main(){

    int firstNumber, secondNumber;
    scanf("%d %d", &firstNumber, &secondNumber);

    printf("%s", (firstNumber > secondNumber ? firstNumber - secondNumber : secondNumber - firstNumber) !=  1 ? "FALSE" : "TRUE");

    return 0;
}
