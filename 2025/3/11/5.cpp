#include <stdio.h>

int main() {

    int a,b,i,result,temp;
    result = 0;
    scanf("%d %d",&a,&b);

    if (a<b)
    {
        /* code */
    }else
    {
        temp;
        temp = a;
        a = b;
        b = temp;
    }

    for ( i = a; i < b+1; i++)
    {
        if (i % 2 == 1)
        {
            result += i;
            /* code */
        }

        /* code */
    }

    printf("%d",result);

    return 0;
}
