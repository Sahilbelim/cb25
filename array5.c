#include <stdio.h>
void main()
{
    int size;

    printf("Enter number of Size : ");
    scanf("%d", &size);

    int i, number[size], add;
    add = 0;
    for (i = 0; i < size; i++)
    {
        printf("Enter Value of number %d : ", i + 1);
        scanf("%d", &number[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("Value of Number %d %d \n", i + 1, number[i]);
        add = add + number[i];
    }
    printf("                 ----\n");
    printf("Addition of       %d \n", add);
    for (i = 0; i < size; i++)
    {
        printf("%d\n", number[i] * number[i]);
    }
    //    printf("%d\n", number[0]*number[0]);
    //    printf("%d\n", number[1]*number[1]);
    //    printf("%d\n", number[2]*number[2]);
    //    printf("%d\n", number[3]*number[3]);
    //    printf("%d\n", number[4]*number[4]);
    //    printf("%d\n", number[5]*number[5]);
}