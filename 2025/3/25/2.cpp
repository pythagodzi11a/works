#include <stdio.h>

int main() {

    int height[10],i,handleHeight,result,leftNum,rightNum;
    leftNum = 0;
    rightNum = 0;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&height[i]);
    }

    scanf("%d",&handleHeight);

    for (i = 0; i < 10; i++)
    {
        if (handleHeight + 30 >= height[i])
        {
            result++;
        }
    }

    printf("%d",result);

    return 0;
}
