#include <stdio.h>

int main() {


    char str[100]={0};
    int i;

    scanf("%s",str);


    for (i = 0; i < 100; i++)
    {
        switch (str[i]){
        case 'O':
            str[i] = '0';
            continue;
        case 'l':
            str[i] = '1';
            continue;
        case 'Z':
            str[i] = '2';
            continue;
        case 'S':
            str[i] = '5';
            continue;
        case 'B':
            str[i] = '8';
            continue;
        case 'b':
            str[i] = '6';
            continue;
        case 'q':
            str[i] = '9';
            continue;
        default:
            continue;

    }
    }

    printf("%s",str);
    return 0;
}
