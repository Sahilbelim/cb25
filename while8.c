// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 ..1000
#include<stdio.h>
void main()
{
    int number,temp;
    number = 1;
    temp = 1;

    while(number<=1000)
    {
        printf("%d ,", number); 
        temp = temp + 4;
        number = number + temp;
    }


    // printf("%d ,", number); //1
    // temp = temp + 4;//5
    // number = number + temp;
    // printf("%d ,", number); //6
    // temp = temp + 4;//9
    // number = number + temp; //15

    // printf("%d ,", number);
    // temp = temp + 4;//13
    // number = number + temp;//28
    // printf("%d ,", number);
    // temp = temp + 4;//17
    // number = number + temp; //45
    
    // printf("%d ,", number);
    // temp = temp + 4;//21
    // number = number + temp; //66
    // printf("%d ,", number);
}