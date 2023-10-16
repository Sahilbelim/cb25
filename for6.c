#include<stdio.h>
void main()
{
    int i, j;

    for (i = 1; i <= 5;i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(i==5 || j==1 || j==i)
            {
            printf("* ");

            }
            else
            {
            printf("  ");
            }
        }
        printf("\n");
        
    }

//    for (j = 1; j <= 5;j++)
//    {
//         printf("*");
//    }
//    printf("\n");
//    for (j = 1; j <= 5; j++)
//    {
//         printf("*");
//    }
//    printf("\n");
//    for (j = 1; j <= 5; j++)
//    {
//         printf("*");
//    }
//    printf("\n");
//    for (j = 1; j <= 5; j++)
//    {
//         printf("*");
//    }
//    printf("\n");
}