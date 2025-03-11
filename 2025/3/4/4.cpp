#include <stdio.h>
#include <math.h>
int main(){
    int number, hundreds, tens, unit;
    scanf("%d", &number);


    hundreds = number/100;
    tens = number/10- 10*hundreds;
    unit = number % 10;

    printf("%s",  pow(hundreds,3)+pow(tens,3)+pow(unit,3) == number ? "TRUE" : "FALSE");
    return 0;
}
