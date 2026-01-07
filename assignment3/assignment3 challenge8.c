#include <stdio.h>   // Provides input-output functions

// Define a structure to store student details
struct Student
{
    char name[50];   // Student's name
    int roll;        // Roll number
    float marks;     // Marks obtained
    char grade;      // Grade based on marks
};

int main()
{
    int n, i;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];   // Array of structures to store multiple students

    /* Input student details */
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name); // Read name (single word)
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        /* Calculate grade */
        if (students[i].marks >= 90)
            students[i].grade = 'A';
        else if (students[i].marks >= 75)
            students[i].grade = 'B';
        else if (students[i].marks >= 50)
            students[i].grade = 'C';
        else
            students[i].grade = 'F';
    }

    /* Display student details */
    printf("\n--- Student Details ---\n");
    printf("Name\tRoll\tMarks\tGrade\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t%.2f\t%c\n", students[i].name, students[i].roll, students[i].marks, students[i].grade);
    }

    return 0;   // End of program
}
\