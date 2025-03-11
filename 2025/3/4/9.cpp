#include <stdio.h>

int main() {
    char first, second;
    scanf("%c %c", &first, &second);

    if (first == second) {
        printf("DEUCE\n");
    } else {

        if ((first == 'S' && second == 'J') ||
            (first == 'J' && second == 'B') ||
            (first == 'B' && second == 'S')) {
            printf("FIRST\n");
        } else {
            printf("SECOND\n");
        }
    }

    return 0;
}
