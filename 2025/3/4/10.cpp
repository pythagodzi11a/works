#include <stdio.h>

int main() {
    int w1, h1, w2, h2, max1, min1, max2, min2, envelope_max, envelope_min;


    scanf("%d %d %d %d", &w1, &h1, &w2, &h2);

    max1 = (w1 > h1) ? w1 : h1;
    min1 = (w1 < h1) ? w1 : h1;
    max2 = (w2 > h2) ? w2 : h2;
    min2 = (w2 < h2) ? w2 : h2;

    envelope_max = (max1 > max2) ? max1 : max2;
    envelope_min = (min1 > min2) ? min1 : min2;

    printf("%d %d", envelope_max, envelope_min);

    return 0;
}
