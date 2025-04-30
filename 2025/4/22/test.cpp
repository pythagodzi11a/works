#include <stdio.h>

int main() {
    int result=0,number,i, a[4][4] = {0}, *pointer = &a[0][0];
    scanf("%d", &number);

    for (i = 0 ;i < 16; i++){
        *(pointer+i) = number + i;
    }

    for (i = 0; i<4; i++){
        result += *(pointer + i);
        result += *(pointer + 12 + i);
    }

    result = result + *(pointer + 4) + *(pointer + 7) + *(pointer + 8) + *(pointer + 11);

    printf("%d", result);
    return 0;
}
