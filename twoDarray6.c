#include <stdio.h>
void main()
{
    int student, subject, i, j;

    printf("Enter Value of Student : "); 
    scanf("%d", &student);
    printf("Enter Value of Subject : ");
    scanf("%d", &subject);

    int marks[student][subject],totalMarks[student];
    float avg[student],max;

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

        totalMarks[i] = 0;
        avg[i] = 0;
        for (j = 0; j < subject; j++)
        {
            printf("\tSubject  %d : %d\n", j + 1, marks[i][j]);
            totalMarks[i] = totalMarks[i] + marks[i][j];
        }
        avg[i] = totalMarks[i] / subject;
        printf("\tTotal Marks: %d \n", totalMarks[i]);
        printf("\tAvg        : %.2f \n",avg[i]);
        
    }


    // 1>1,2,3,4,5 1 is highest 
    // 2>1,2,3,4,5 2 is highest 
    // 3>1,2,3,4,5 3 is highest

    max = avg[0];

    for (j = 0; j < student;j++)
    {
        if (max < avg[j])
        {
            max = avg[j];
        }

    }
    printf("\n|||||||||||||||||||||||Heighest Pr = %.2f ||||||||||||||\n", max);
    for (i = 0; i < student;i++)
    {
        if (avg[i] == max)
        {
            printf("|||||||||||||Student %d have a Heighest Pr  ||||||||||\n",i+1);
        }
    }
  
}