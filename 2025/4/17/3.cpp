#include <stdio.h>

int main() {

    char str[1000],*pointer = str;
    int count = 0,i=0;

    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    str[i] = '\0';

    while(*pointer != '\0') {
        if (*pointer == ' '){
            count++;
        }
        pointer++;
    }

    printf("%d", count);

    return 0;
}
