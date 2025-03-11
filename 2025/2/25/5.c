#include<stdio.h>

void main(){
    char character;
    scanf("%c",&character);

    int characterASCII = (int)character;
    printf("%c,%c,%d",(char)characterASCII-1,(char)characterASCII+1,character);

}