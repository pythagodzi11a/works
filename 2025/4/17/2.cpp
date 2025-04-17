#include <stdio.h>

int main()
{
    char letter;

    while ((letter = getchar()) != '\n')
    {
        if ((int)letter >= 122 && (int)letter <= 97)
        {
            printf("FALSE");
            return 0;
        }
    }

    printf("TRUE");
    return 0;
}
