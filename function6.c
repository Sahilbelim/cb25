#include<stdio.h>

void area_cylinder()
{
    float r, h,area, pi;

    pi = 3.1415926;
    printf("\nEnter Value of Cylinder \n");
    printf("Enter Radius : ");
    scanf("%f", &r);
    printf("Enter Height : ");
    scanf("%f", &h);

    area = (2 * pi * r * h) + (2 * pi * (r * r));

    printf("Area of Cylinder  : %.2f\n", area);

}

void main()
{
    area_cylinder();
}