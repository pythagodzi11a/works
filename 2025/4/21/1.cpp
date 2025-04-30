#include <stdio.h>

typedef struct{
    int x, y, z;
}Position;

int main() {
    int i,N;
    Position input;
    Position max={0,0,0};

    scanf("%d", &N);

    for (i=0; i<N; i++){
        scanf("%d %d %d", &input.x, &input.y, &input.z);
        if (input.z > max.z){
            max = input;
        }
    }

    printf("%d %d %d", max.x, max.y, max.z);

    return 0;
}
