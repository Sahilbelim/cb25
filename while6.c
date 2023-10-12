#include<stdio.h>
void main()
{
    int number,temp;

    // temp = 1;
    printf("Enter Starting number : ");
    scanf("%d", &temp);

    printf("Enter Ending of number : ");
    scanf("%d", &number);

    while (temp <= number)
    {
        printf("%d ,", temp);
        temp = temp + 1;
    }
   
}