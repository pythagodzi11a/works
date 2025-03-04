/*小军，每天都要从家到学校去上学（好像大家都是这样）。很幸运的是，他家和学校在一条直线上（两点肯定在一条直线上……），现在告诉你小军家的一维坐标n和学校的一维坐标m，请你算出从小军家到学校的距离（注意：不要使用abs函数哟）。*/
#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    if (n>m)

        printf("%d",n-m);
        /* code */
    else

        printf("%d",m-n);


    return 0;
}
