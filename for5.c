#include<stdio.h>
void main()
{
    int i, j,k;
    k = 5;

    for (i = 1; i <= 5;i++)
    {
        for (j = 1; j <= k; j++)
        {

            if(i==1 || j==1 || j==k)
            {
            printf("* ");

            }
            else
            {
            printf("  ");
            }
        }
        printf("\n");
        k--;
    }

    // for (j = 1; j <= 5;j++)
    // {
    //     printf("*");
    // }
    // printf("\n");
    // for (j = 1; j <= 5; j++)
    // {
    //     printf("*");
    // }
    // printf("\n");

    // for (j = 1; j <= 5; j++)
    // {
    //     printf("*");
    // }
    // printf("\n");

    // for (j = 1; j <= 5; j++)
    // {
    //     printf("*");
    // }
    // printf("\n");
}