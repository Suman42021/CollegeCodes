#include <stdio.h>

int main()
{
    int x;
    printf("Input a number to check:");
    scanf("%d", &x);
    if (x%3 == 0)
    {
        if(x%5 == 0)
        {
            printf("The number is divisible by both 3 & 5");
        }
        else
        {
            printf("The number is only divisible by 3 ");
        }
    }
    if (x%5 == 0)
    {
        printf("The number is only divisible by 5");
    }
    return 0;
}
