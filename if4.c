#include<stdio.h>
void main()
{
    int year,lip_year;

    printf("Enter Value of year : ");
    scanf("%d", &year);

    printf("Given Year is %d \n", year);

    lip_year = (year % 4);

    if (lip_year == 0)
    {
        printf("Given Year is Leap Year ");
     }

     printf("\nGood bye ..");
}