#include <stdio.h>
void main()
{

    int number, first_num, last_num;

    printf("Enter Any Two Digir number : ");
    scanf("%d", &number);
    printf("Value of number : %d \n", number);

    if(number<10 || number>99)
    {
        printf("Enter Only Two Digit number is Invalide \n");
    }
    else{

    // 45
    //  first_num=4
    //  last_num=5
    first_num = number / 10;
    last_num = number % 10;

    // printf("%d\n", first_num);
    // printf("%d", last_num);

    // printf(" First Nuber : ");
    printf("  Nuber : ");
    switch (first_num)
    {

    case 1:
        printf("One  ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three  ");
        break;
    case 4:
        printf("Four  ");
        break;
    case 5:
        printf("Five  ");
        break;
    case 6:
        printf("Six  ");
        break;
    case 7:
        printf("Seven  ");
        break;
    case 8:
        printf("Eight  ");
        break;
    case 9:
        printf("Nine  ");
        break;
    case 0:
        printf("Zero  ");
        break;
    }
    // printf("\n Last Number : ");
    switch (last_num)
    {

    case 1:
        printf("One  ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three  ");
        break;
    case 4:
        printf("Four  ");
        break;
    case 5:
        printf("Five  ");
        break;
    case 6:
        printf("Six  ");
        break;
    case 7:
        printf("Seven  ");
        break;
    case 8:
        printf("Eight  ");
        break;
    case 9:
        printf("Nine  ");
        break;
    case 0:
        printf("Zero  ");
        break;
    }
    }
}