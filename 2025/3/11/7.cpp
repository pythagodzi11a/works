#include <stdio.h>

int main() {
    int counter, number[10000], result = 0, i;

    scanf("%d", &counter);

    for (i = 0; i < counter; i++) {
        scanf("%d", &number[i]);

        if (number[i] % 2 == 0) {
            result += 1;
        }
    }

    printf("%d", result);

    return 0;
}
