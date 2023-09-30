#include<stdio.h>
void main()
{
    int number;

    printf("Enter Value of number ");
    scanf("%d", &number);
    printf("Value of number %d\n", number);

    

    if(number==0)
    {
        printf("Given number is Zero \n");
    }
    else if(number%2==1)
    {
        printf("Given number is odd \n");

    }
    else
    {
        printf("Given number is Even \n");
    }
}