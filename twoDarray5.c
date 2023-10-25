#include <stdio.h>
void main()
{
    int student, subject, i, j;

    printf("Enter Value of Student : ");
    scanf("%d", &student);
    printf("Enter Value of Subject : ");
    scanf("%d", &subject);

    int marks[student][subject];



    // printf("Enter Marks of Subject 1 : ");
    // scanf("%d", &marks[0][0]);
    // printf("Enter Marks of Subject 2 : ");
    // scanf("%d", &marks[0][1]);
    // printf("Enter Marks of Subject 3 : ");
    // scanf("%d", &marks[0][2]);

    // printf("Enter The Marks of Student 2 \n");
    // printf("Enter Marks of Subject 1 : ");
    // scanf("%d", &marks[1][0]);
    // printf("Enter Marks of Subject 2 : ");
    // scanf("%d", &marks[1][1]);
    // printf("Enter Marks of Subject 3 : ");
    // scanf("%d", &marks[1][2]);

    // printf("Enter The Marks of Student 3 \n");
    // printf("Enter Marks of Subject 1 : ");
    // scanf("%d", &marks[2][0]);
    // printf("Enter Marks of Subject 2 : ");
    // scanf("%d", &marks[2][1]);
    // printf("Enter Marks of Subject 3 : ");
    // scanf("%d", &marks[2][2]);

    // printf("Enter The Marks of Student 1 \n");

    // for (j = 0; j < subject;j++)
    // {
    //     printf("Enter Marks of Subject 1 : ");
    //     scanf("%d", &marks[0][j]);
    // }
    // printf("Enter The Marks of Student 2 \n");

    // for (j = 0; j < subject; j++)
    // {
    //     printf("Enter Marks of Subject 1 : ");
    //     scanf("%d", &marks[1][j]);
    // }
    // printf("Enter The Marks of Student 3 \n");

    // for (j = 0; j < subject; j++)
    // {
    //     printf("Enter Marks of Subject 1 : ");
    //     scanf("%d", &marks[2][j]);
    // }


    for (i = 0; i < student; i++)
    {
        printf("Enter The Marks of Student %d \n", i + 1);

        for (j = 0; j < subject; j++)
        {
            printf("Enter Marks of Subject %d : ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    // printf("\n||||||||||||||||||||||STUDENT 1 ||||||||||||||||||||||||\n");
    // printf("\tSubject  1 : %d\n", marks[0][0]);
    // printf("\tSubject  2 : %d\n", marks[0][1]);
    // printf("\tSubject  3 : %d\n", marks[0][2]);

    // printf("\n||||||||||||||||||||||STUDENT 2 ||||||||||||||||||||||||\n");
    // printf("\tSubject  1 : %d\n", marks[1][0]);
    // printf("\tSubject  2 : %d\n", marks[1][1]);
    // printf("\tSubject  3 : %d\n", marks[1][2]);

    // printf("\n||||||||||||||||||||||STUDENT 3 ||||||||||||||||||||||||\n");
    // printf("\tSubject  1 : %d\n", marks[2][0]);
    // printf("\tSubject  2 : %d\n", marks[2][1]);
    // printf("\tSubject  3 : %d\n", marks[2][2]);

    // printf("\n||||||||||||||||||||||STUDENT 1 ||||||||||||||||||||||||\n");

    // for (j = 0; j < subject;j++)
    // {
    //     printf("\tSubject  %d : %d\n",j+1, marks[0][j]);
    // }

    // printf("\n||||||||||||||||||||||STUDENT 2 ||||||||||||||||||||||||\n");

    // for (j = 0; j < subject; j++)
    // {
    //     printf("\tSubject  %d : %d\n", j + 1, marks[1][j]);
    // }

    // printf("\n||||||||||||||||||||||STUDENT 3 ||||||||||||||||||||||||\n");

    // for (j = 0; j < subject; j++)
    // {
    //     printf("\tSubject  %d : %d\n", j + 1, marks[2][j]);
    // }

    for (i = 0; i < student; i++)
    {

        printf("\n||||||||||||||||||||||STUDENT %d ||||||||||||||||||||||||\n", i + 1);

        for (j = 0; j < subject; j++)
        {
            printf("\tSubject  %d : %d\n", j + 1, marks[i][j]);
        }
    }
}