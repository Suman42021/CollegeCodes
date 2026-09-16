#include <stdio.h>

int main(void)
{
    int x,y,temp;
    printf("Enter 2 no. to Swap:");
    scanf("%d%d", &x, &y);
    printf("\nBefore Swap: %d  ,  %d", x, y);
    
    temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swap: %d  ,  %d", x, y);
    return 0;
}
