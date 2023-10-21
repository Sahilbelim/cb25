#include<stdio.h>
void main()
{
    int size=7;
    int i,number[size];

    for (i = 0; i < size;i++)
    {
        printf("Enter Value of number %d : ",i+1);
        scanf("%d", &number[i]);
   }
   for (i = 0; i < size;i++)
   {
        printf("Value of Number %d %d \n",i+1, number[i]);
   }
}