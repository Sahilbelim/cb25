#include<stdio.h>
void main()
{
    int month;
    printf("Enter Value of month ");
    scanf("%d", &month);

    printf("Value of month : %d \n", month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Days of Month is 31 \n");
    }
    else if (month==2)
    {
        printf("Days of Month is 28/29 \n");
        
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Days of Month is 30 \n");
    }
    else
    {
        printf("Invalide Month \n");
    }
    printf("Good bye ");
}