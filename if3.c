#include<stdio.h>
void main()
{
    int number;
    printf("Enter Value of number : ");
    scanf("%d", &number);

    // printf("Nummber : %d \n", number);

    if(number<0)
    {
        printf("Number is nagetive \n");
        number = number * (-1);

        printf("Possitive ");
    }
    printf(" Number is %d ", number);
}