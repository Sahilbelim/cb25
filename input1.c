#include <stdio.h>
#include <stdlib.h>
void main()
{
    int number = 0;
    float num2 = 0;
    char letter = 'a';

    printf("Enter value of number ");
    scanf("%d", &number);
    printf("Enter value of num2 ");
    scanf("%f", &num2);
    fflush(stdin);
    printf("Enter any one letter ");
    scanf("%c", &letter);

    printf("The value of number is %d and value of num2 is %f and value of letter is %c ", number, num2, letter);
}