#include <stdio.h>

int main() {

    char str[1000],*pointer = str;
    int count = 1,i=0;

    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    str[i] = '\0';

    while(*pointer != '\0') {
        if (*pointer > 'z' || *pointer < 'a'){ //傻逼了加了等号
            count = 0;
            break;
        }
        pointer++;
    }

    printf("%s", (count == 0) ? "FALSE" : "TRUE");

    return 0;
}
