#include<stdio.h>

void printSymbol(char s,int n )
{
    int i;

    for (i = 1; i <= n; i++)
    {
        printf("%c", s);
    }
    printf("\n");
}

void main()
{
    char symbol;
    int number;

    printf("Enter Value of Symbol : ");
    scanf("%c", &symbol);
    printf("Enter Number of Symbol : ");
    scanf("%d", &number);

    // printSymbol('-',20);
    printSymbol(symbol, number);
    printf("\tName    : Sahil Belim \n");
    printSymbol(symbol, number);
    
    printf("\tAge     : 18\n");
  
    printSymbol(symbol, number);
    printf("\tNumber  : 7485963652\n");
    
    printSymbol(symbol, number);
    printf("\tEmail   : sahil@gmail.com\n");
    printSymbol(symbol, number);

 
    
}