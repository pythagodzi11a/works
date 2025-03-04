/*由键盘上输入两个不相等的正整数，请判断其中一个数是否为另一个数的因子，是输出“TRUE”，否则输出“FALSE”。*/
#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    printf("%s", n%2 == 0 ? "even" : "odd");
}
