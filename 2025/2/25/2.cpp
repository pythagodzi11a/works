#include<stdio.h>
#include<math.h>

void main(){
    double x1, x2, y1, y2, distance ;
    x1 = x2 = y1 = y2 = distance = 0;
    printf("x1:")
    scanf("%lf",&x1);
    printf("\ny1:");
    scanf("%lf",&y1);
    printf("\nx2:");
    scanf("%lf",&x2);
    printf("\ny2:");
    scanf("%lf",&y2);

    distance = pow(pow(x1-x2,2) + pow(y1-y2,2),0.5);

    printf("distance:%7.2f",distance);
}