#include <stdio.h>

int main(void)
{
    int x, y, z, min;
    printf("Enter 3 values:");
    scanf("%d%d%d", &x, &y, &z);

    min = (x<y)?x:y;
    min = (min<z)?min:z;

    printf("The Min between 3 no is:%d", min);
    return 0;
}