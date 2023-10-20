#include <stdio.h>
void main()
{
    int choise = 0;
    float number1, number2, Ans;
    do
    {
        printf("\n\n|||||||||||||||||||||||||||||Select number for perform oparetion : ||||||||||||||||||||||||||\n\n ");
        printf("1 for Addition \n ");
        printf("2 for Subtraction  \n ");
        printf("3 for Muliplication  \n ");
        printf("4 for Division  \n ");
        printf("Select Number : ");
        scanf("%d", &choise);
        if (choise >= 1 && choise <= 4)
        {
            printf("Eneter Value of  Number 1 :");
            scanf("%f", &number1);
            printf("Eneter Value of  Number 2 :");
            scanf("%f", &number2);
        }
        switch (choise)
        {
        case 1:
            Ans = number1 + number2;
            printf("Addition of Given Numbers : %.2f\n", Ans);
            break;
        case 2:
            Ans = number1 - number2;
            printf("Subtraction of Given Numbers : %.2f\n", Ans);
            break;
        case 3:
            Ans = number1 * number2;
            printf("Multiplication  of Given Numbers : %.2f\n", Ans);
            break;
        case 4:
            Ans = number1 / number2;
            printf("Division  of Given Numbers : %.2f\n", Ans);
            break;

        default:
            printf("Invalide Choise\n");
            break;
        }

        printf("If continue Then Enter 0 -->> ");
        scanf("%d", &choise);

    } while (choise == 0);
}