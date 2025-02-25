#include<stdio.h>

void main(){
    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    int hundreds = number/100;
    int tens = number/10- 10*hundreds;
    int unit = number % 10;

    printf("%d,%d,%d",hundreds,tens,unit);
}