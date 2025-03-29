#include <stdio.h>

int main() {
    int number,digit,i, number1 = 0,count = 0;
    scanf("%d", &number);

    for (i =1;i<number+1;i++){
        number1 = i;
        digit = 0;

        while (number1 > 0) {
            digit = number1 % 10; // 提取最后一位数字
            if (digit == 2) {
                count++;
            }
            number1 /= 10; // 去掉最后一位数字
    }
}

    printf("%d", count);
    return 0;
}
