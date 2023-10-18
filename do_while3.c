//write a program to make generate reverse number of given number
//input 123
//output = 321
#include <stdio.h>
void main()
{
    int amount = 0;
    int reminder;
    int reverse = 0;
    printf("enter amount");
    scanf("%d", &amount);
    do 
    {
        reminder = amount % 10;              // 3
        reverse = (reverse * 10) + reminder; // 3
        amount = amount / 10;                // 12
    } while (amount > 0);

    printf("\n reverse = %d", reverse);
}