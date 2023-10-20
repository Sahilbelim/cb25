//write a program to findout first 20 prime numbers 
// 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53
#include <stdio.h>
void main()
{
    int num1 = 3,divider,reminder=0,primecount=2;
    printf("\n 1 2 ");
    do
    {
        divider = 2;
        if(num1 % 2 != 0)

        {
            do
            {
                reminder = num1 % divider; // 5 % 2 =1
                if (reminder == 0)
                    break;
                else
                    divider = divider + 1; // 3
            } while (divider < num1);
            if (divider == num1)
            {
                printf("\t %d", num1);
                primecount++;
            }
        }
        num1++;
    } while (primecount <= 20);
}