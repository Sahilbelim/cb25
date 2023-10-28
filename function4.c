#include<stdio.h>

int get_add(int n1 ,int n2)
{
    int add = n1 + n2;

    return add;
    // return (n1 + n2);
}


void main()
{
    int number1, number2,add;

    printf("Enter Value of Number 1 : ");
    scanf("%d", &number1);
    printf("Enter Value of Number 2 : ");
    scanf("%d", &number2);

    add = get_add(number1,number2);

    printf("Addition of Given number %d \n", add);

    add = get_add(number1,number1);
    printf("Addition of number 1 %d \n", add);
    add = get_add(number2,number2);
    printf("Addition of number 2 %d \n", add);
}