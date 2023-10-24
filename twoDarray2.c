#include <stdio.h>
void main()
{
    int i,j,number[3][3];

    for (i = 0; i < 3;i++)
    {
        printf("Enter Value of Elemtnt of %d-1 ",i+1);
        scanf("%d", &number[i][0]);

        printf("Enter Value of Elemtnt of %d-2 ",i+1);
        scanf("%d", &number[i][1]);

        printf("Enter Value of Elemtnt of %d-3 ",i+1);
        scanf("%d", &number[i][2]);
    }

    // printf("Enter Value of Elemtnt of 1-1 ");
    // scanf("%d", &number[0][0]);

    // printf("Enter Value of Elemtnt of 1-2 ");
    // scanf("%d", &number[0][1]);

    // printf("Enter Value of Elemtnt of 1-3 ");
    // scanf("%d", &number[0][2]);

    // printf("Enter Value of Elemtnt of 1-1 ");
    // scanf("%d", &number[1][0]);

    // printf("Enter Value of Elemtnt of 1-2 ");
    // scanf("%d", &number[1][1]);

    // printf("Enter Value of Elemtnt of 1-3 ");
    // scanf("%d", &number[1][2]);

    // printf("Enter Value of Elemtnt of 1-1 ");
    // scanf("%d", &number[2][0]);

    // printf("Enter Value of Elemtnt of 1-2 ");
    // scanf("%d", &number[2][1]);

    // printf("Enter Value of Elemtnt of 1-3 ");
    // scanf("%d", &number[2][2]);
    
    // number[0][0] = 10;
    // number[0][1] = 20;
    // number[0][2] = 85;

    // number[1][0] = 25;
    // number[1][1] = 75;
    // number[1][2] = 95;

    // number[2][0] = 25;
    // number[2][1] = 75;
    // number[2][2] = 36;

    // printf("Number : %d \n",number[0][0]);
    // printf("Number : %d \n",number[0][1]);

    // printf("Number : %d \n",number[1][0]);
    // printf("Number : %d \n",number[1][1]);

    // printf("Number : %d \n",number[2][0]);
    // printf("Number : %d \n",number[2][1]);
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 3;j++)
        {
            printf("Value of Elelment [%d-%d] : %d \n",i+1,j+1, number[i][j]);
        }

    }
}