#include<stdio.h>

void main(){
    char a , b;
    scanf("%c,%c",&a,&b);
    char temp;
    temp = a;
    a = b;
    b = temp;

    printf("%c,%c",a,b);
}