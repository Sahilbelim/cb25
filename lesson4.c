// Write a programe to findout bmi of user
#include <stdio.h>
void main()
{
    float weight = 100.100;
    float height = 1.36;
    float answer = 0;
    answer = weight / ( height * height );
    printf("The value of bmi is %f ", answer);
}