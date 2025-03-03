#include <stdio.h>
int main(){
    float r; //招笑，nt编译器
    int number1, number2;
    scanf("%d %d",&number1,&number2);
    
    r = (float)number1/(float)number2;

    printf("%.2f",r);

    return 0;
}