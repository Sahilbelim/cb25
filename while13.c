/*
1
22
333
4444
55555
*/

#include <stdio.h>
void main()
{
    int j, i = 1;

    // printf("%d", col);
    // col++;
    // printf("\n");
    // i = 1;
    // while (i <= 2)
    // {
    //     printf("%d", col);
    //     i++;
    // }
    // col++;
    // printf("\n");
    // i = 1;
    // while (i <= 3)
    // {
    //     printf("%d", col);
    //     i++;
    // }
    // col++;
    // printf("\n");
    // i = 1;
    // while (i<=4)
    // {
    //     printf("%d", col);
    //     i++;
    // }
    // col++;
    // printf("\n");
    // i = 1;
    // while (i<=5)
    // {
    //     printf("%d", col);
    //     i++;
    // }
    // printf("\n");
    i = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d", i);
            j++;
        }
        // k++;
        i++;
        printf("\n");
    }
}