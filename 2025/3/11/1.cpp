#include <stdio.h>

int main()
{
    int startNumber, finalNumber, result;
    result=0;
    scanf("%d %d", &startNumber, &finalNumber);
    {
    for (int number=startNumber; number<finalNumber+1;number++)
    {
        if (number % 2 == 0)
        {
            result+=number;
        }
    }
}
    printf("%d",result);
    return 0;
}

/*#include <stdio.h>

int main()
{
    int startNumber, finalNumber, result, number;
    result=0;
    scanf("%d %d", &startNumber, &finalNumber);
    for (number=startNumber; number<finalNumber+1;number++)
    {
        if (number % 2 == 0)
        {
            result+=number;
        }
    }
    printf("%d",result);
    return 0;
}
//循环的变量要提升作用域也是无敌了*/
