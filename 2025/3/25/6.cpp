#include <stdio.h>
#include <stdlib.h>

int main() {

    char num,fakeArray[1];
    int odd;

    while((num = getchar()) != '\n') {
        if(num == '1') {
            odd =  1;
        }
        if (num == '0')
        {
            odd = 0;
        }
    }

    printf("%s",odd ? "ODD" : "EVEN");


    return 0;
}
