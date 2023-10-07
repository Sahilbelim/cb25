#include<stdio.h>
void main()
{
    int number1, number2, number3;

    printf("Enter Value of number 1 : ");
    scanf("%d", & number1);

    printf("Enter Value of number 2 : ");
    scanf("%d", &number2);

    printf("Enter Value of number 3 : ");
    scanf("%d", &number3);

    printf("Value of number 1 :%d\n", number1);
    printf("Value of number 2 :%d\n", number2);
    printf("Value of number 3 :%d\n", number3);

    if(number1>number2)
    {
        if(number1>number3)
        {
            printf("Number 1 is greater then number 2 or 3 \n");
        }
        else if (number3>number1)
        {
            printf("Number 3 is greater then number 1 or 2 \n");
            /* code */
        }
        
        else
        {
            printf("Number 1 and number 3 are same  and greater \n");
        }

    }
    else if (number2>number1)
    {
        if(number2>number3)
        {
            printf("Number 2 is greater then number 1 or 3 \n");

        }
        else if (number3>number2)
        {
            printf("Number 3 is greater then number 2 or 1 \n");
        }
        
        else
        {
            printf("Number 2 and number 3 are same  and greater \n");
        }
    }
    else
    {
        if(number1==number2 && number2==number3)
        {
            printf("All are same ");
        }
        else
        {
            printf("Number 1 and number 2 are same  and greater \n");
        }
    }
    
    
}