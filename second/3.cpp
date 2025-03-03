#include <stdio.h>

int main(){
    int coinNumber, people;
    
    scanf("%d %d",&coinNumber,&people);
    printf("%d",coinNumber/people + 1);

    return 0;
}