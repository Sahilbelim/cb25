//write a program to findout whether 3 digit number is armstrong number or not
//input 153
// 1,5,3 (1*1*1) + (5*5*5) + (3 * 3 * 3)
//output = 153
#include <stdio.h>
void main()
{
    int amount = 0;
    int reminder;
    int reverse = 0;
    printf("enter amount");
    scanf("%d", &amount);

    reminder = amount % 10; //3
    reminder = reminder * reminder * reminder;
    reverse = reverse + reminder;
    amount = amount / 10;

    printf("\n reverse = %d", reverse);
}