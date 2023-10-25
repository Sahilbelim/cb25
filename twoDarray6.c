#include <stdio.h>
void main()
{
    int student, subject, i, j;

    printf("Enter Value of Student : "); 
    scanf("%d", &student);
    printf("Enter Value of Subject : ");
    scanf("%d", &subject);

    int marks[student][subject];

// get value of  marks from user 
    for (i = 0; i < student; i++)
    {
        printf("Enter The Marks of Student %d \n", i + 1);

        for (j = 0; j < subject; j++)
        {
            printf("Enter Marks of Subject %d : ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    
//  print all marks 
    for (i = 0; i < student; i++)
    {

        printf("\n||||||||||||||||||||||STUDENT %d ||||||||||||||||||||||||\n", i + 1);

        for (j = 0; j < subject; j++)
        {
            printf("\tSubject  %d : %d\n", j + 1, marks[i][j]);
        }
            printf("\tTotal Marks: -- \n");
            printf("\tAvg        : -- \n");
        
    }
}