#include<stdio.h>
#include<stdlib.h>
void main()
{
    char name[24];

    printf("Enter Name : ");
    fflush(stdin);
    scanf("%c", &name[0]);
    scanf("%c", &name[1]);
    scanf("%c", &name[2]);

    printf("%c%c%c", name[0], name[1], name[2]);
}