#include<stdio.h>

float get_pi()
{
    return 3.1415926;
    // printf("Get pi function call"); code not execute/run . 
}
void main()
{
    float pi, r, area;

    // pi = 3.1415926;
    pi = get_pi();

    printf("Enter Value of Radius : ");
    scanf("%f", &r);

    // printf("%f", r);
    get_pi();
    area = pi * (r * r);
    printf("Area of Circle : %.2f\n", area);
}