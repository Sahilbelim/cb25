// Write a programe to findout area of cylinder 
#include<stdio.h>
void main()
{
    int radius = 45;
    int height = 25;
    float area = 0;
    float pi = 3.141592;

    area = (2 * pi * radius * height) + (2 * pi * (radius * radius));
    printf("The value of area of cylinder is %f ", area);
}