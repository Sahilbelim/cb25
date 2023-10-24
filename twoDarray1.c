#include <stdio.h>
void main()
{
    int i,j,number[3][3];

    number[0][0] = 10;
    number[0][1] = 20;
    number[0][2] = 85;

    number[1][0] = 25;
    number[1][1] = 75;
    number[1][2] = 95;

    number[2][0] = 25;
    number[2][1] = 75;
    number[2][2] = 36;

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
            printf("Number : %d \n", number[i][j]);
        }

    }
}