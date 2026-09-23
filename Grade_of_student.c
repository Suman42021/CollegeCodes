#include <stdio.h>

int main(void)
{
    float m1,m2,m3,m4,m5,Grade;
    printf("Enter marks of 5 subjects:");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
    Grade = (m1+m2+m3+m4+m5)/(float)500 * 100;
    if (Grade >= 90)
    {
        printf("Grade:A");
    }
    else if (Grade >= 80)
    {
        printf("Grade:B");
    }
    else if (Grade >= 50)
    {
        printf("Grade:E");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
