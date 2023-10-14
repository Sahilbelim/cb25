// Write a programe to print inverted half pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 0;
     int temp = 6;

     while (flash < 5)
     {
          while (count < temp)
          {
               printf("*");
               count++;
          }
          printf("\n");
          count = 0;
          temp--;
          // temp = temp - 1 
          flash++;
     }
     // while (count < 5)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 3)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 2)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     printf("*");
}