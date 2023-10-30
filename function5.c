#include <stdio.h>

int get_add(int n1, int n2)
{
    int add = n1 + n2;

    return add;
    // return (n1 + n2);
}
int get_sub(int a, int b)
{
    int sub;
    if (a > b)
        sub = a - b;
    else
        sub = b - a;

    return sub;
}

int get_mul(int m1, int m2)
{

    return (m1 * m2);
}
float get_div(int a, int b)
{

    return (a / b);
}

int get_mod(int x, int y)
{
    return (x % y);
}
void main()
{
    int number1, number2, ans, ch;
    ans = 0;
    do
    {

        printf("\n\nChoose the option of given operations \n");
        printf("1 for Addition \n");
        printf("2 for Subraction \n");
        printf("3 for Multiplication  \n");
        printf("4 for Division  \n");
        printf("5 for Module  \n");
        printf("Enter Choise : ");
        scanf("%d", &ch);

        if (ch >= 1 && ch <= 5)
        {
            printf("Enter Value of Number 1 : ");
            scanf("%d", &number1);
            printf("Enter Value of Number 2 : ");
            scanf("%d", &number2);
        }
        switch (ch)
        {
        case 1:
            ans = get_add(number1, number2);
            break;
        case 2:
            ans = get_sub(number1, number2);
            break;
        case 3:
            ans = get_mul(number1, number2);
            break;
        case 4:
            ans = get_div(number1, number2);
            break;
        case 5:
            ans = get_mod(number1, number2);
            break;
        default:
            ans = 0;
            printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<Invalide Choise >>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
            break;
        }

        printf("\n||||||||||||||||||||||||||Answer of Given Operation  %d ||||||||||||||||||\n", ans);

        printf("If Exit then Enter 6 ");
        scanf("%d", &ch);
    } while (ch != 6);
}