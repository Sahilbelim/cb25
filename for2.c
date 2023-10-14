// 1, 4, 9, 16, 25, ..., 10000
#include<stdio.h>
void main()
{
    int sq, number;

    for (number = 1; number <= 100;number++)
    {
        sq = number * number;
        printf("%d , ", sq);
       
    }

    // sq = number * number;
    // printf("%d , ", sq);
    // number++;
    // sq = number * number;
    // printf("%d , ", sq);

    // number++;
    // sq = number * number;
    // printf("%d , ", sq);

    // number++;
    // sq = number * number;
    // printf("%d , ", sq);
    // number++;
    // sq = number * number;
    // printf("%d , ", sq);
}