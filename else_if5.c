//  Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input. 
// units           price  per unit 
// <100            1
// >100 & <200     2 
// >200 & <300     3
// >300 & <400     4
// >400            5
// also calculate 5% percentage energy charge on total bill amount & display total amount 

#include<stdio.h>
void main()
{
    int unit,price,amount;
    price = 0;
    float tex, total_amount;
    tex = 0;
    printf("Enter Value of unit ");
    scanf("%d", &unit);

    printf("Value of Unit is %d \n", unit);

    if(unit>=1 && unit<100)
    {
        price = 1;
        
    }
    else if (unit>=100 &&  unit<200)
    {
        price = 2;
       
    }
    else if (unit>=200 && unit<300)
    {
        price = 3;
    }
    else if (unit>=300 && unit <400 )
    {
        price = 4;
    }
    else if (unit>=400)
    {
        price = 5;
    }
    
    else
    {
        price = 0;
    }

        //  input is Valide or note 

        if(price==0)
        {
        printf("Invalide input ");
        }
        else
        {
        amount = price * unit;
        tex = (amount * 5) / 100;

        total_amount = amount + tex;
        printf("Final amount is %.2f \n", total_amount);
        }
}