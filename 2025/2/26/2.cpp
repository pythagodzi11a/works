#include<stdio.h>

int main(){
    int number,hundreds,unit,tens,result; //纯tm煞笔

    scanf("%d",&number);

     hundreds = number/100;
     tens = number/10- 10*hundreds;
     unit = number % 10;

     result;
    result = hundreds + tens*10 + unit * 100;

    printf("%d",result);

    return 0;
}