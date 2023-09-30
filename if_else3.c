#include<stdio.h>
void main()
{
    int number1, number2;

    printf("Value of number 1 ");
    scanf("%d", &number1);
    printf("Value of number 2 ");
    scanf("%d", &number2);

    printf("Value of number 1 : %d and Number 2 :  %d \n", number1, number2);

    if(number1>number2)
    {
        printf("Number 1 is greater then number 2 ");
    }
    else
    {
        printf("Number 2 is greater then number 1 ");
    }

    printf("\nGood bye ");
    
}