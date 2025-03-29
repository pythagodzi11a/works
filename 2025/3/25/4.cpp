#include <stdio.h>

int main() {

    int number,yesORno[10],i,j,left[1000],right[1000],leftNum,rightNum;
    leftNum = 0;
    rightNum = 0;

    char str[1000];

    scanf("%d",&number);

    for (i = 0; i < number; i++)
    {
        scanf("%s",str);

        for (j = 0;j<1000;j++)
        {
            if (str[j] == '[')
            {
                left[leftNum]='[';
                leftNum++;
            }

            if (str[j] == ']')
            {
                right[rightNum]=']';
                rightNum++;
            }

            if (str[j] == '(')
            {
                left[leftNum]='(';
                leftNum++;
            }

            if (str[j] == ')')
            {
                right[rightNum]=')';
                rightNum++;
            }

        }

        for (j = 999;j>=0;j--)
        {
            if(j == 0)
            {
                yesORno[i] = 1;
                break;
            }
            else if(right[j]==']' && left[j]=='[')
            {
                continue;
            }else if(right[j]==')' && left[j]=='(')
            {
                continue;
            }else
            {
                yesORno[i] = 0;
                break;
            }

        }
    }


    for ( i = 0; i < 1000; i++)
    {
        printf("%d",yesORno[i]);
    }


    return 0;
}
