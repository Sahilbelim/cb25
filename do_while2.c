//write a program to make sum of all digits in given amount
//input 123
//process 1 + 2 + 3
//output = 6
#include <stdio.h>
void main()
{
    int amount = 0;
    int reminder;
    int sum = 0;
    printf("enter amount");
    scanf("%d", &amount);

    do 
    {
        reminder = amount % 10;
        sum = sum + reminder; // 3
        amount = amount / 10; // 12
    } while (amount > 0);
    printf("\n sum = %d", sum);
}