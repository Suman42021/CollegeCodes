#include <stdio.h>

int main(){
    int x,y,z,max;
    printf("Enter 1st value:");
    scanf("%d", &x);
    printf("Enter 2nd value:");
    scanf("%d", &y);
    printf("Enter 3rd value:");
    scanf("%d", &z);
    max = x;
    
    if (y>max)
    {
        max = y;
    }
    if (z>max)
    {
        max = z;
    }
    printf("Maximum among 3 is:%d", max);
    return 0;
}
