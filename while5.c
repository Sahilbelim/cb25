#include<stdio.h>
void main()
{
    int number,temp;
    temp =1;

    printf("Enter Value of number : ");
    scanf("%d", &number);

    while (temp <= number)
    {
        printf("%d ,", temp);
        temp = temp + 1;
    }
   
}