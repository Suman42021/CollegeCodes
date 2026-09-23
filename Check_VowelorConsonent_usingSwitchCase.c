#include <stdio.h>

int main()
{
    char check;
    printf("Enter char to check: ");
    scanf("%c", &check);

    switch (check)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    printf("Vowel");
    break;
    default:
    printf("Consonent");
    break;
    }
    return 0;
}