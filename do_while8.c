// write a program to findout 1st five armstrong number using do while loop
// , 153, 370, 371 and 407
#include <stdio.h>
void main()
{
    int number, first, middel, last, arm, count;
    number = 100;
    count = 0;

    do
    {
        first = number / 100;
        last = number % 10;
        middel = number % 100; // 53
        // printf("Middle : %d \n", middel);
        middel = middel / 10;

        arm = (first * first * first) + (middel * middel * middel) + (last * last * last);
        // printf("First : %d \n", first);
        // printf("Middle : %d \n", middel);
        // printf("Last : %d \n", last);

        if (number == arm)
        {
            printf(" %d  ,", arm);
            count++;
        }
        number++;
    } while (count<5);

    // number = 101;
    // first = number / 100;
    // last = number % 10;
    // middel = number % 100;
    // middel = middel / 10;
    // arm = (first * first * first) + (middel * middel * middel) + (last * last * last);
    // if (number == arm)
    // {
    //     printf(" %d  ,", arm);
    //     count;
    // }
    // number++;
}