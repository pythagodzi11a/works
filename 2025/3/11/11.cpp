#include <stdio.h>

int main() {

    int S,M,i;
    scanf("%d %d",&S,&M);

    if (S*100%M == 0){
        printf("00 ");
    }

    for (i = 1;i<10;i++){
        if ((i+S*100)%M==0){
            printf("0%d ",i);
        }
    }

    for (i = 10;i<100;i++){
        if ((i+S*100)%M==0){
            printf("%d ",i);
        }
    }

    return 0;
}
