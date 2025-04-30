#include <stdio.h>

int func(int a, int b) {
    if (b ==0)
    {
        return a;
    }
    else
    {
        return func(b, a % b);
    }

}

int main() {
    int temp,m,n,result;

    scanf("%d %d", &m, &n);

    if (m<n)
    {
        temp = m;
        m = n;
        n = temp;
    }

    result = func(m, n);
    printf("%d", result);

    return 0;
}
