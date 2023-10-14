// Write a programe to print inverted half pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{

     int count = 1;
     int flash = 7;
     while (flash > 0)
     {
          while (count < flash)
          {
               printf("%d", count);
               // temp++;
               count++;
          }
          printf("\n");
          count = 1;
          // temp = temp - 5;
          flash--;
     }
}

// 1
// 2 2 
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6 