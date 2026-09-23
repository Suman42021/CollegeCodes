#include <stdio.h>

int main(void)
{
    int x;
    printf("Input year:");
    scanf("%d", &x);

    if(x%4==0)
    {
        if(x%100==0)
        {
            if(x%400==0)
            {
                printf("Year is a LeapYear");
            }
            else
            {
                printf("Year is not a LeapYear");
            }
        }
        else
        {
            printf("Year is a LeapYear");
        }
    }
    else
    {
        printf("Year is not a LeapYear");
    }
    return 0;
}