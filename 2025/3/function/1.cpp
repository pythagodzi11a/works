#include <stdio.h>

long JieCheng(int a){
    if (a == 0)
    {
        return 1;
    }
    if (a != 0)
    {
        return a * JieCheng(a - 1);
    }
}

int main() {
    int n;
    long result;
    scanf("%d", &n);

    result = JieCheng(n);
    printf("%d", result);
    return 0;
}
