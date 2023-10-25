#include <stdio.h>
void main()
{
    int row, col;

    printf("Enter Row Of Elements ");
    scanf("%d", &row);
    printf("Enter Column of Element ");
    scanf("%d", &col);

    int i,j,number[row][col];

//  get input from user 

    for (i = 0; i < row;i++)
    {
        for (j = 0; j < col;j++)
        {
            printf("Enter Value of Elemtnt of %d-%d ",(i+1),(j+1));
            scanf("%d", &number[i][j]);
        }
        
    }

//   print Array Element 

    for (i = 0; i < row;i++)
    {
        for (j = 0; j < col;j++)
        {
            printf("Value of Elelment [%d-%d] : %d \n",i+1,j+1, number[i][j]);
        }

    }
}