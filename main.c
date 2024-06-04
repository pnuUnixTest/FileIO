#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "process.h"

#define MAX_STUDENTS 100

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    char buffer[50];

    printf("--Student Enrollment Management System--\n");

    while (1) {
        printf("[1] Enroll    [2] List    [3] Update    [4] Delete    [5] Quit\n");
        printf("Selection: ");
        scanf("%d", &choice);
        getchar(); // buffer clear

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    /* TODO 1
                       Enter the information for the student you want to enroll.
                       You must use 'inputStudentInfo' function
                       Do not change variable 'count' in main.c. */

                    //==============Your Code==============




                    //==============Your Code==============

                    printf("Enroll Successfully!\n");
                } else {
                    printf("Student list is full!\n");
                }
                break;
            case 2:
                /* TODO 2
                   Print all students' information.
                   You must use 'printAllStudents' function. */

                   //==============Your Code==============




                   //==============Your Code==============

                break;
            case 3:
                printf("Enter student ID to update: ");
                scanf("%49s", buffer);
                int id = atoi(buffer);
                /* TODO 3
                   Update the information for the desired student.
                   You must use 'updateStudentInfo' function. */

                   //==============Your Code==============




                   //==============Your Code==============

                break;
            case 4:
                printf("Enter student ID to delete: ");
                scanf("%49s", buffer);
                id = atoi(buffer);
                /* TODO 4
                   Delete the desired student's information.
                   You must use 'deleteStudent' function.
                   Do not change variable 'count' in main.c. */

                   //==============Your Code==============




                   //==============Your Code==============

                break;
            case 5:
                printf("Quit Program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    }
}
