// Write a programe to peform split of 2 digit number + , - , * , / , %
// number = 56
// first = 5, second = 6;
#include<stdio.h>
void main()
{
    int number = 739;
    int first = 0, second = 0;
    int third = 0;
    first = number / 100;
    second = (number % 100) / 10;
    third = number % 10;
    printf("The value of first is %d ", first);
    printf("\nThe value of second is %d ", second);
    printf("\nThe value of third is %d ", third);
}