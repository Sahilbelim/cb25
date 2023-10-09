// write a program to check given date is Valide or not .

#include<stdio.h>
void main()
{
    int year, date, month;

    printf("Enter Value of Date : ");
    scanf("%d", &date);
    printf("Enter Value of month : ");
    scanf("%d", &month);
    printf("Enter Value of Year : ");
    scanf("%d", &year);

    printf("\nValue of Date : %d \n", date);
    printf("\nValue of Month : %d \n", month);
    printf("\nValue of Year : %d \n", year);

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month ==12 )
    {
        if(date>=1 && date<=31)
        {
            printf("Date are Valinde \n");
        }
        else
        {
            printf("Date are Invalide \n");
        }
    }
    else if (month==4 || month==6 || month==9 || month ==11)
    {
        if(date>=1 && date<=30)
        {
            printf("Date are Valinde \n");

        }
        else
        {
            printf("Date are Invalide \n");
        }
        }
    
    else if (month==2)
    {
        if((year%4)!=0)
        {
            if(date>=1 && date<=28)
            {
            printf("Date are Valinde \n");

            }
            else
            {
            printf("Date are Invalide \n");
            }
        }
        else
        {
            if(date>=1 && date<=29)
            {
            printf("Date are Valinde \n");

            }
            else
            {
            printf("Date are Invalide \n");
            }
        }
    }
    
    else
    {
        printf("Date and month are Invalide \n");
    }
    
    
}