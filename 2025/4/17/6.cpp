#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float *ptr, sum = 0.0;
    int N, i;

    scanf("%d", &N);
    ptr = (float*)malloc(N * sizeof(float));

    for (i=0; i<N; i++){
        ptr[i] = 100.0 * cos(i * 0.01);
    }

    for (i=0; i<N; i++){
        sum += (float)ptr[i];
    }

    printf("%.2f", sum);

    return 0;
}
