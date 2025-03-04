#include <stdio.h>

int main(){
    int score, grades;
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Score is error!");
        /* code */
    }else
    {
        grades = score/10;
        switch (grades)
        {
            case 9:
                printf("A");
                break;
            case 8:
                printf("B");
                break;
            case 7:
                printf("C");
                break;
            case 6:
                printf("D");
                break;
            case 10:
                printf("A");
                break;
            default:
                printf("E");
                break;
        }
    }


    return 0;
}
