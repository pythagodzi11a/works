/*#include <stdio.h>

int main()
{

    int floor, singleFloor, i, j ,result;

    scanf("%d", &floor);
    singleFloor = 0;
    result = 0;

    for (j = 1; j < floor + 1; j++)
    {
        for (i = 1; i < j + 1; i++)
        {
            singleFloor += i;
            printf("%d ", singleFloor);
        }

        result += singleFloor;

    }

    printf("%d", result / 2);

    return 0;
}
*/
#include <stdio.h>

int singleFloor(int floor) {
    int i, result;
    result = 0;

    for (i = 1; i < floor+1; i++)
    {
        result += i;
    }

    return result;
}

int main() {

    int floor, result,i;
    scanf("%d", &floor);
    result = 0;

    for (i = 0; i < floor + 1; i++)
    {
        result += singleFloor(i);
    }

    printf("%d", result);
    return 0;
}
