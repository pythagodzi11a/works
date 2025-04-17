
#include <math.h>
#include <stdio.h>
#define for_i(i, range, inner)                                                 \
    {                                                                          \
        int i;                                                                 \
        for (i = 0; i < range; i++)                                            \
            inner;                                                             \
    }

void fake_func() {}

int main() {
    int n, avg = 0, count=0;
    int a[1005];
    scanf("%d", &n);
    for_i(i, n, {
        int x = 600 * cos(i * 0.35);
        avg += x;
        a[i] = x;
    });
    avg /= n;
    for_i(i, n, {
        if (a[i] < avg) {
            count++;
        }
    });
    printf("%d\n", count);
    return 0;
}
