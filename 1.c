#include<stdio.h>

void main(){
    float radius = 0;
    float squre = 0;
    float volume = 0;
    float pi = 3.14159;

    scanf("%f",&radius);

    squre = 4 * pi * radius * radius;
    volume = squre * radius * 0.33333;

    printf("%7.2f,%7.2f",squre,volume);

}