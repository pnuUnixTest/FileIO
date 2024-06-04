#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "process.h"

void inputStudentInfo(Student* student, int* count) {

    /* TODO 5
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    printf("Enter student name: ");
    scanf("%49[^\n]", _____[1]_____); //Store the name in the Student struct.
    getchar(); // buffer clear

    printf("Enter student age: ");
    scanf("%d", _____[2]_____); //Store the age in the Student struct.
    getchar(); // buffer clear

    printf("Enter student ID: ");
    scanf("%d", _____[3]_____); //Store the student ID in the Student struct.
    getchar(); // buffer clear

    //==============Your Code==============



    /* TODO 6
       Add 1 to the variable 'count'. */

    //==============Your Code==============




    //==============Your Code==============
}

void printStudentInfo(const Student* student) {

    /* TODO 7
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    printf("Student Information:\n");
    printf("Name: %s\n", _____[1]_____); //Print the name in the Student struct.
    printf("Age: %d\n", _____[2]_____); //Print the age in the Student struct.
    printf("Student ID: %d\n", _____[3]_____); //Print the student ID in the Student struct.

    //==============Your Code==============
}

void printAllStudents(const Student students[], int count) {

    /* TODO 8
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    printf("---All Students---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s    %d    %d\n", i + 1, _____[1]_____, _____[2]_____, _____[3]_____);
        //Print out the name, age, and class number of the i-th student struct.
    }

    /* Example Output:
    ---All Students---
    1. Hongbin 24	202412345
    2. Dat	24	202454321
    */

    //==============Your Code==============
}

void updateStudentInfo(Student students[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (students[i].studentID == id) {
            int choice;
            printf("\nWhat would you like to update?\n");
            printf("1. Name\n");
            printf("2. Age\n");
            printf("3. Student ID\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            getchar(); // buffer clear

            /* TODO 9
               Fill in the blanks with appropriate answers. */

            //==============Your Code==============

            switch (choice) {
                case 1:
                    printf("Enter new name: ");
                    scanf("%49[^\n]", _____[1]_____); //Update the name in the i-th student struct.
                    getchar(); // buffer clear
                    break;
                case 2:
                    printf("Enter new age: ");
                    scanf("%d", _____[2]_____); //Update the age in the i-th student struct.
                    getchar(); // buffer clear
                    break;
                case 3:
                    printf("Enter new student ID: ");
                    scanf("%d", _____[3]_____); //Update the student ID in the i-th student struct.
                    getchar(); // buffer clear
                    break;
                default:
                    printf("Invalid choice.\n");
                    return;
            }

           //==============Your Code==============



            printf("Update Successfully!\n");

            /* TODO 10
               Print the updated student's information.
               You must use 'printStudentInfo' function. */


            //==============Your Code==============




            //==============Your Code==============

            return;
        }
    }
    printf("Student ID %d not found.\n", id);
}

void deleteStudent(Student students[], int* count, int id) {
    for (int i = 0; i < *count; i++) {
        if (students[i].studentID == id) {

            int j; // Index for the deletion process

            /* TODO 11
               Starts a loop from the index of the deleted student (i) to the index before the end of the array.
               The end of the array is the size currently in use, not the maximum size of the array.
               This loop iterates through each element after the deleted student.
               Moves each student's data one position to the left by assigning the data at index j with the data at index j + 1.

               Subtract 1 from the variable 'count'. */

            //==============Your Code==============




            //==============Your Code==============

            printf("Delete Successfully!\n");
            return;
        }
    }
    printf("Student ID %d not found.\n", id);
}
