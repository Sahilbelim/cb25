#include<stdio.h>
void main()
{
    int number1, number2;
    printf("Enter Value of number 1 ");
    scanf("%d", &number1);
    printf("Enter Value of number 2 ");
    scanf("%d", &number2);

    printf("Value of number 1 %d \n", number1);
    printf("Value of number 2 %d \n", number2);

    if(number1<number2)
    {
        printf("Number 1 is small \n");
    }

    printf("Good bye ");
}