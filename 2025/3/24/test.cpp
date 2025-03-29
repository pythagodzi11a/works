#include <stdio.h>

int main() {

    int numebr[10]={0,1,2,3,4,5,6,7,8,9};

        for(int j = 1; j < 10; j++){
            for(int k = 1; k < 10-j; k++){
                if(numebr[k]>numebr[k-1]){
                    int temp = numebr[k];
                    numebr[k] = numebr[k-1];
                    numebr[k-1] = temp;
                }
            }
        }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",numebr[i]);
    }

    return 0;
}
