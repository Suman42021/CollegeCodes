#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter 2 no. to Swap:");
    scanf("%d%d", &x, &y);
    printf("\nBefore Swap: %d  ,  %d", x, y);
    
    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("\nAfter Swap: %d  ,  %d", x, y);
    return 0;
}
