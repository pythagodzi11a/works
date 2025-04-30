#include <stdio.h>

int main() {

    char month[][5] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
    int n;
    char *ptr[12];

    scanf("%d", &n);
    if (n>=1 && n<=12)
    {
        printf("%s", month[n-1]);
    }else{
        printf("Error");
    }


    return 0;
}
