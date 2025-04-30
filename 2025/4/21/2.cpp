#include <stdio.h>

int main() {
    struct PhoneNumber
    {
        char areaCodeChar[10];
        char NumberChar[40];
    };

    PhoneNumber number1, number2;

    scanf("%s %s", &number1.areaCodeChar, &number1.NumberChar);
    scanf("%s %s", &number2.areaCodeChar, &number2.NumberChar);


    if (number1.areaCodeChar == number2.areaCodeChar)
    {
        printf("%s", number2.NumberChar);
    }else{
        printf("%s%s", number2.areaCodeChar ,number2.NumberChar);
    }
    return 0;
}
