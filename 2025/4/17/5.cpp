#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,*ptr;
    int N,sum = 0;

    scanf("%d", &N);
    ptr = (int*)malloc(N * sizeof(int));

    for (i=0; i<N; i++){
        ptr[i] = 100*sin(i*0.05);
    }

    for (i=0; i<N; i++){
        sum += ptr[i];
    }

    printf("%d", sum);
    free(ptr);

    return 0;
}
