#include<stdio.h>
void main()
{
    int number[5];

    // number[0] = 10;
    // number[1] = 20;
    // number[2] = 60;
    // number[3] = 80;
    // number[4] = 70;

    printf("Enter Value of number 1 : ");
    scanf("%d", &number[0]);
    printf("Enter Value of number 2 : ");
    scanf("%d", &number[1]);
    printf("Enter Value of number 3 : ");
    scanf("%d", &number[2]);
    printf("Enter Value of number 4 : ");
    scanf("%d", &number[3]);
    printf("Enter Value of number 5 : ");
    scanf("%d", &number[4]);

    printf("Value of Number 1 %d \n", number[0]);
    printf("Value of Number 2 %d \n", number[1]);
    printf("Value of Number 3 %d \n", number[2]);
    printf("Value of Number 4 %d \n", number[3]);
    printf("Value of Number 5 %d \n", number[4]);
}