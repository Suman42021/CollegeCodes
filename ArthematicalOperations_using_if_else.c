#include <stdio.h>

int main()
{
    int x, y, ch;
    printf("Enter 2 nos:");
    scanf("%d%d", &x, &y);
    printf("Choose:ch=1(add)\nch=2(sub)\nch=3(multi)\nch=4(div)\n");
    scanf("%d", &ch);
    if(ch==1)
    {
        printf("Sum:%d", (x+y));
    }
    if(ch==2)
    {
        printf("Sub:%d", (x-y));
    }
    if(ch==3)
    {
        printf("Multi:%d", (x*y));
    }
    if(ch==4)
    {
        if(y!=0)
        {
            printf("Div:", (float)x/y);
        }
        else
        {
            printf("Division by zero is undefined");
        }
    }
    else
    {
        printf("Choose a valid Operation..");
    }
    return 0;
}