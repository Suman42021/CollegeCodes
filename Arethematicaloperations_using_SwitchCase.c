#include <stdio.h>

int main()
{
    int x, y, ch;
    printf("Enter 2no:");
    scanf("%d%d", &x, &y);
    printf("Choose:\nch=1(Sum)\nch=2(Sub)\nch=3(Multi)\nch=4(Div)\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
        printf("Sum:%d", (x+y));
        break;
        case 2:
        printf("Sub:%d", (x-y));
        break;
        case 3:
        printf("Multi:%d", (x*y));
        break;
        case 4:
        if (y!=0)
        {
            printf("Div:%.2f", (float)x/y);
        }
        else
        {
            printf("Division by 0 is undefined!");
        }
        break;
        default:
        printf("Choose Correctly..");
        break;
    }   
    return 0;
}