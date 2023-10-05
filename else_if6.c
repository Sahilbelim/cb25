// Check if a character is a vowel or a consonant.
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter Value of Letter ");
    scanf("%c", &letter);

    printf("Value of Letter is %c \n", letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {

        printf("It's a Vowel \n");
    }

    else if (letter == '1' || letter == '2' || letter == '3' || letter == '4' || letter == '5' || letter == '6' || letter == '7' || letter == '8' || letter == '9' || letter == '0')
    {
        printf("Invalide input ");
    }
    
    else
    {
        printf("It's a Consonant \n");
    }
    
}