#include <stdio.h>

int main()
{
    float x,y,z;
    printf("Enter 1st number: ");
    scanf("%f", &x);
    printf("Enter 2nd number: ");
    scanf("%f", &y);
    printf("Enter 3rd number: ");
    scanf("%f", &z);
    printf("Average of 3 no = %.2f\n",(x+y+z)/3);
    return 0;
}
