/*Student Management System (Step by Step)

Step 1: Input details of 3–5 students (name, roll number, marks).

Step 2: Display all students.

Step 3: Find the student with the highest marks.

Step 4 (optional): Search student by roll number.*/
#include <stdio.h>
int main(void)
{
    char name[5][50];
    int roll_no[5];
    float marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d:\n", i + 1);
        scanf("%s", name[i]);

        printf("Enter roll no of student %d:\n", i + 1);
        scanf("%d", &roll_no[i]);

        printf("Enter marks of student %d:\n", i + 1);
        scanf("%f", &marks[i]);
    }

    printf("\n----- Students Detail -----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name = %s, Roll No = %d, Marks = %.2f\n",
               name[i], roll_no[i], marks[i]);
    }
    // Find out the Topper
    printf("Do you want to check who is topper!!\n");
    int a;
    printf("Press 1 to check!\n");
    scanf("%d", &a);
    if (a == 1)
    {

        int high_marks = 0;
        for (int i = 1; i < 5; i++)
        {
            if (marks[i] > high_marks)
            {
                high_marks = i;
            }
        }
        printf("---TOPER---\n");
        printf("Name:%s\n", name[high_marks]);
        printf("Marks:%f\n", marks[high_marks]);
        printf("Roll no:%d\n", roll_no[high_marks]);
    }
    // Search Student by roll number
    int search_student;
    printf("Enter a roll no to search:\n");
    scanf("%d", &search_student);
    int found = 0;
    for (int i = 0; i < 5; i++)
    {
        if (roll_no[i] == search_student)
        {
            printf("Name:%s\n", name[i]);
            printf("Marks:%f\n", marks[i]);
            printf("Roll no:%d\n", roll_no[i]);
            found = 1;
            break;
        }
    }
printf("Student Found by Roll number!!\n");
    return 0;
}
