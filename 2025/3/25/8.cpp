#include <stdio.h>

int main() {

    int number,score[101]={0},i,max,temp,maxCount;

    maxCount = 0;
    max = 0;

    scanf("%d",&number);

    for (i = 0;i < number;i++)
    {
        scanf("%d",&temp);
        score[temp] ++;
    }

    for (i = 0; i < 101; i++)
    {
        if (score[i] > maxCount)
        {
            max = i;
            maxCount = score[i];
        }
    }

    for (i = 0; i < 101; i++)
    {
        if(score[i] == score[max])
        {
            printf("%d ",i);
        }
    }

    return 0;
}
