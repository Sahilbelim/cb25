#include<stdio.h>
void main()
{
    int month,date;
    printf("Enter Value of Month ");
    scanf("%d", &month);
    printf("Enter Value of Day ");
    scanf("%d", &date);

    printf("Value of month and Date %d/%d \n",month,date);

    if(month==1 && date<=31 && date>=1)
    {
        printf("month and date is Valide \n");
    }
    else if (month==2 && date<=29 && date>=1)
    {
        printf("month and date is Valide \n");
    }
    else if (month==3 && date<=31 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==4 && date<=30 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==5 && date<=31 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==6 && date<=30 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==7 && date<=31 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==8 && date<=31 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==9 && date<=30 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==10 && date<=31 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==11 && date<=30 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
    else if (month==12 && date<=31 && date>=1)
    {
        printf("Month and Date is Valide \n");
    }
    
     else
        {
            printf("Invalide Date and Month  \n");
        }

        printf("Good bye ");
}