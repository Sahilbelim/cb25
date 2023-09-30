#include<stdio.h>
void main()
{
    int number;
    printf("Enter Value of number ");
    scanf("%d", &number);

    // printf("Value of number %d ", number);

    if((number%2)==1)
    {
        printf("\nGiven number is odd \n");
    }
    else
    {
        printf("\nGiven number is Even \n");
    }

    printf("Good bye ");
}