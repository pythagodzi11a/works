#include <stdio.h>

int search(int x[], int n, int *count){
    int max = x[0], i;
    for (i = 0; i < n; i++)
    {
        if (x[i] > max) {
            max = x[i];
            *count = 1;
        } else if (x[i] == max) {
            (*count)++;
        }
    }

    return max;
}

int main() {
    int highest,i,arr[1000],number,count=0;
    scanf("%d", &number);

    for (i = 0; i < number; i++){
        scanf("%d", &arr[i]);
    }

    highest = search(arr, number, &count);
    printf("%d %d",highest, count);

    return 0;
}
