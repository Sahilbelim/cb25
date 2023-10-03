#include<stdio.h>
void main()
{
    int h_in_f, h_in_i;
    float weight,f_to_m,i_to_m,height,bmi;

    printf("Enter Value of Weight in kg : ");
    scanf("%f", &weight);
    printf("Enter Value of Height in Foot : ");
    scanf("%d", &h_in_f);
    printf("Enter  Value of Height in Inch : ");
    scanf("%d", &h_in_i);

    printf("Valu of Weight  : %.2f \n",weight);
    printf("Value of Height in Foot : %d \n", h_in_f);
    printf("Value of Height in Inch : %d \n", h_in_i);

    f_to_m = h_in_f / 3.281;
    i_to_m = h_in_i / 39.37;

    height = f_to_m + i_to_m;

    bmi = weight / (height * height);

    printf("\n|||||||||||||||||||||||||| BMI : %.2f ||||||||||||||||||||||||||\n", bmi);

    if(bmi>0 &&  bmi<18)
    {
    printf("\n|||||||||||||||||||||||||| You are UnderWeight ||||||||||||||||||||||||||\n", bmi);

    }
    else if (bmi>=18 && bmi<25)
    {
    printf("\n|||||||||||||||||||||||||| You are Normal ||||||||||||||||||||||||||\n", bmi);
    }
    else if (bmi>=25 && bmi<30)
    {
    printf("\n|||||||||||||||||||||||||| You are OverWeight ||||||||||||||||||||||||||\n", bmi);
        
    }
    else if (bmi>=30 && bmi<35)
    {
    printf("\n|||||||||||||||||||||||||| You are Obese ||||||||||||||||||||||||||\n", bmi);
      
    }
    else if(bmi>=35)
    {

    printf("\n|||||||||||||||||||||||||| You are Extremely Obese ||||||||||||||||||||||||||\n", bmi);

    } 
    else
    {
    printf("\n|||||||||||||||||||||||||| Invalide Input ||||||||||||||||||||||||||\n", bmi);
    }
    
}