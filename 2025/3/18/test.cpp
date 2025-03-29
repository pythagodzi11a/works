#include <stdio.h>

int main() {

    int i,number;
    scanf("%d",&number);

    if(number == 1|| number == 0){
        printf("TRUE");
    }

    for (i = 1; i < number; i++){
        if (i*i == number){
            printf("TRUE");
            break;
        }
        if(i == number - 1)
        {
            printf("FALSE");
            break;
        }
    }

    return 0;
}
