#include<stdio.h>
void main()
{
    int i,number[5];

    for (i = 0; i < 5;i++)
    {
        printf("Enter Value of number %d : ",i+1);
        scanf("%d", &number[i]);
   }
   for (i = 0; i < 5;i++)
   {
        printf("Value of Number %d %d \n",i+1, number[i]);
   }
}