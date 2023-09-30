#include<stdio.h>
void main()
{

    int number;

    printf("Enter Value of number ");
    scanf("%d", &number);

    printf("Value of number %d \n", number);

    if(number>0)
    {
        printf("Given number is possitive \n");
    }
    else
    {
        printf("Given number is Nagetive \n");
        number = number * (-1);
        printf("Final possitive number %d\n", number);
    }

}