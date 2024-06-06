#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "process.h"

int main() {
    Student record;
    int choice;
    char buffer[50];

    printf("--Student Enrollment Management System--\n");

    while (1) {
        printf("[1] Enroll    [2] List    [3] Quit\n");
        printf("Selection: ");
        scanf("%d", &choice);
        while (getchar() != '\n'); // clear buffer

        switch (choice) {
            case 1:
                inputStudentInfo(&record);
                enrollStudentInfo(&record);
                break;
            case 2:
                printAllStudents();
                break;
            case 3:
                printf("Quit Program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    }
}
