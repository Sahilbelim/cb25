// write a program to find area of three triangle and check who's small .
#include <stdio.h>
void main()
{
    float h1, b1, h2, b2, h3, b3, area1, area2, area3;

    printf("Enter Value of Triangle 1 \n");
    printf("Enter  Height : ");
    scanf("%f", &h1);
    printf("Enter  Base : ");
    scanf("%f", &b1);

    printf("Enter Value of Triangle 2 \n");
    printf("Enter  Height : ");
    scanf("%f", &h2);
    printf("Enter  Base : ");
    scanf("%f", &b2);

    printf("Enter Value of Triangle 3  \n");
    printf("Enter  Height : ");
    scanf("%f", &h3);
    printf("Enter  Base : ");
    scanf("%f", &b3);

    printf("\nValue of Triangle 1 \n");
    printf("Value of Height : %.2f \n", h1);
    printf("Value of Base : %.2f \n", b1);

    printf("\nValue of Triangle 2 \n");
    printf("Value of Height : %.2f \n", h2);
    printf("Value of Base : %.2f \n", b2);

    printf("\nValue of Triangle 3 \n\n");
    printf("Value of Height : %.2f \n", h3);
    printf("Value of Base : %.2f \n", b3);

    area1 = (h1 * b1) / 2;
    area2 = (h2 * b2) / 2;
    area3 = (h3 * b3) / 2;

    printf("\nArea of Triangle 1 : %.2f\n\n" ,area1);
    printf("Area of Triangle 2 : %.2f\n\n" ,area2);
    printf("Area of Triangle 2 : %.2f\n\n" ,area3);

    if(area1<area2)
    {
        if(area1<area3)
        {
            printf("Triangle 1 is small \n");
        }
        else if (area3<area1)
        {
            printf("Triangle 3 is small \n");
        }
        else
        {
            printf("Triangle 1 and 3 are same and smaller \n");
        }        
    }
    else if (area2<area1)
    {
        
        if(area2<area3){

            printf("Triangle 2 is small \n");
        }
        else if (area3<area2)
        {
            printf("Triangle 3 is small \n");
            
        }
        else
        {
            printf("Triangle 2 and 3 are same and smaller \n");

        }
    }
    else
    {
        if(area1==area2 && area2==area3 )
        {
            printf("Triangle 1 ,2 and 3 all are same \n");
        }
        else
        {
            printf("Triangle 1 and 2 are same and smaller \n");
            
        }
    }
    
}