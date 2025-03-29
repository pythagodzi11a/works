#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int i, j, k, length, temp,wordCount,characterCount;
    wordCount = 0;
    characterCount = 0;
    scanf("%s", str);

    for (i = 0; i < 99; i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
        {
            wordCount++;
        }

        if (str[i] != ' ')
        {
            characterCount++;
        }

        if (str[i] == '\0')
        {
            break;
        }

    }

    printf("%d %d",wordCount,characterCount);
    return 0;
}
