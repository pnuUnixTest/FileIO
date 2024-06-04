#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "process.h"

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    char buffer[50];

    printf("--Student Enrollment Management System--\n");

    printf("\nLoad previous save...\n");
    loadStudentInfo(students, &count);

    while (1) {
        printf("[1] Enroll    [2] List    [3] Update    [4] Delete    [5] Quit\n");
        printf("Selection: ");
        scanf("%d", &choice);
        getchar(); // buffer clear

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    inputStudentInfo(&students[count], &count);
                    printf("Enroll Successfully!\n");
                } else {
                    printf("Student list is full!\n");
                }
                break;
            case 2:
                printAllStudents(students, count);
                break;
            case 3:
                printf("Enter student ID to update: ");
                scanf("%49s", buffer);
                int id = atoi(buffer);
                updateStudentInfo(students, count, id);
                break;
            case 4:
                printf("Enter student ID to delete: ");
                scanf("%49s", buffer);
                id = atoi(buffer);
                deleteStudent(students, &count, id);
                break;
            case 5:
                printf("Quit Program.\n");
                if (count > 0){
                    storeAllStudents(students, count);
                }
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    }
}
