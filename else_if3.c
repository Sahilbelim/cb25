#include<stdio.h>
void main()
{
    int month;
    printf("Enter Value of month ");
    scanf("%d", &month);

    printf("Value of month : %d \n", month);

    if(month==1)
    {
        printf("Days of Month is 31 \n");
    }
    else if (month==2)
    {
        printf("Days of Month is 28/29 \n");
        
    }
    else if (month==3)
    {
        printf("Days of Month is 31 \n");
    }
    else if (month==4)
    {
        printf("Days of Month is 30 \n");
    }
    else if (month==5)
    {
        printf("Days of Month is 31 \n");
    }
    else if (month==6)
    {
        printf("Days of Month is 30 \n");
    }
    else if (month==7)
    {
        printf("Days of Month is 31 \n");
    }
    else if (month==8)
    {
        printf("Days of Month is 31 \n");
    }
    else if (month==9)
    {
        printf("Days of Month is 30 \n");
    }
    else if (month==10)
    {
        printf("Days of Month is 31 \n");
    }
    else if (month==11)
    {
        printf("Days of Month is 30 \n");
    }
    else if (month==12)
    {
        printf("Days of Month is 31 \n");
    }
    else
    {
        printf("Invalide Month \n");
    }
    printf("Good bye ");
}