#include <stdio.h>

void func(int a, int b, int *sum, int *diff, int *product, float *divide){
    *sum = a + b;
    *diff = a - b;
    *product = a * b;
    if (b != 0) {
        *divide = (float)a / b;
    } else {
        *divide = 0; // Avoid division by zero
    }
}

int main() {
    int a, b, sum, diff, product;
    float divide;
    scanf("%d %d", &a, &b);

    func(a, b, &sum, &diff, &product, &divide);

    printf("%d %d %d %.2f", sum, diff, product, divide);
    return 0;
}
