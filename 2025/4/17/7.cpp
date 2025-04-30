#include <stdio.h>

int main() {
    int a[4][4]={0}, *ptr=*a, i, sum=0, N;

    scanf("%d", &N);

    for (i=0; i<16; i++){
        *(ptr+i) = N;
        N++;
    }

    for (i=0; i< 16; i+=5){
        sum += *(ptr+i);
    }

    for (i=3; i< 15; i+=3){
        sum += *(ptr+i);
    }

    printf("%d", sum);
    return 0;
}
