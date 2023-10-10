#include <stdio.h>
void main()
{
    char letter;
    printf("Enter Value of Letter : ");
    scanf("%c", &letter);

    printf("Value of Letter : %c \n", letter);

    switch (letter)
    {
    case 'a':
        printf("It's Vovel \n");
        break;
    case 'e':
        printf("It's Vovel \n");
        break;

    case 'i':
        printf("It's Vovel \n");
        break;
    case 'o':
        printf("It's Vovel \n");
        break;
    case 'u':
        printf("It's Vovel \n");
        break;
    case 'A':
        printf("It's Vovel \n");
        break;
    case 'E':
        printf("It's Vovel \n");
        break;

    case 'I':
        printf("It's Vovel \n");
        break;
    case 'O':
        printf("It's Vovel \n");
        break;
    case 'U':
        printf("It's Vovel \n");
        break;

    default:
        printf("It's Consonent \n");
        break;
    }
}