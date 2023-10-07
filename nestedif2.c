#include<stdio.h>
void main()
{
    int year, month;

    printf("Enter Value of Year : ");
    scanf("%d", &year);

    printf("Enter Value of Month : ");
    scanf("%d", &month);

    printf("Value of month : %d \n", month);
    printf("Value of year : %d \n", year);

    if(month==1 || month==3 || month==5 || month ==7 || month==8 || month==10 || month ==12)
    {
        printf("Date of month is 31 \n");
    }
    else if (month==4 || month==6|| month==9 || month==11)
    {
        printf("Date of month is 30 \n");
    }
    else if (month==2)
    {
        if((year%4)==0)
        {
        printf("Date of month is 29 \n");

        }
        else
        {
        printf("Date of month is 28 \n");

        }
    }
    else
    {
        printf("Invalide Date ");
    }
    
}