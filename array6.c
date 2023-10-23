#include <stdio.h>
void main()
{
     int size, i;
     printf("Enter Size of Element : ");
     scanf("%d", &size);

     // printf("Size : %d", size);
     int A[size], B[size];

     printf("Enter Value of A Elements : \n");

     for (i = 0; i < size; i++)
     {
          printf("Elter Value of Element %d ", i + 1);
          scanf("%d", &A[i]);
     }
     printf("Enter Value of B Elements : \n");

     for (i = 0; i < size; i++)
     {
          printf("Elter Value of Element %d ", i + 1);
          scanf("%d", &B[i]);
     }

     printf("    A          B           A+B         AxA        BxB       \n");
     for (i = 0; i < size;i++)
     {
          printf("    %d         %d         %d       %d       %d       \n", A[i], B[i], (A[i] + B[i]), (A[i] * A[i]), (B[i] * B[i]));
     }
}