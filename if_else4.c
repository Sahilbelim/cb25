#include<stdio.h>
void main()
{
    int age;
    printf("Enter Value of age ");
    scanf("%d", &age);

    printf("Value  of age is %d \n", age);

    if(age>=18)
    {
        printf("You are aligible for voting ");
    }
    else
    {
        printf("You are not aligible for voting ");
    }

    printf("\nGood bye");
    
}