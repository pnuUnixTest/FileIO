#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "process.h"

void loadStudentInfo(Student students[], int* count) {

    /* TODO 1
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    FILE* file = _____[1]_____("result.txt", _____[2]_____); //Open the 'result.txt' file using the read mode.
    if (_____[3]_____) { // Verify that the file pointer is not NULL.
        printf("No history saved.\n\n");
        return;
    }

    char buffer[100];

    for (int i = 0; i < 2; i++){ // ignore two lines
        if (_____[4]_____) { // Use the 'fgets' function to read a line from 'result.txt' and save it to 'buffer'. Verify that the result is not NULL.
            printf("Error reading header from file.\n\n");
            _____[5]_____ // Close the stream.
            return;
        }
    }

    // Read student information from the file and populate the 'students' array.
    int j;
    while (fscanf(file, "%d. %49s %d %d", &j, _____[6]_____ , _____[7]_____ , _____[8]_____) == _____[9]_____) {
        // Store the information from the file to the students array at position '*count'.
        (*count)++;
        if (*count >= MAX_STUDENTS) {
            printf("Student list is full! Cannot load more data from file.\n\n");
            _____[10]_____ // Close the stream.;
            return;
        }
    }

    _____[11]_____ // Close the stream.


    //==============Your Code==============


    printf("Done!\n\n");
}

void inputStudentInfo(Student* student, int* count) {

    /* TODO 2
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    printf("Enter student name: ");
    scanf("%49[^\n]", _____[1]_____); //Store the name in the Student struct.
    getchar(); // clear buffer

    printf("Enter student age: ");
    scanf("%d", _____[2]_____); //Store the age in the Student struct.
    getchar(); // clear buffer

    printf("Enter student ID: ");
    scanf("%d", _____[3]_____); //Store the student ID in the Student struct.
    getchar(); // clear buffer

    //==============Your Code==============

    (*count)++;
}

void printStudentInfo(const Student* student) {

    /* TODO 3
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    printf("Student Information:\n");
    printf("Name: %s\n", _____[1]_____); //Print the name in the Student struct.
    printf("Age: %d\n", _____[2]_____); //Print the age in the Student struct.
    printf("Student ID: %d\n", _____[3]_____); //Print the student ID in the Student struct.

    //==============Your Code==============
}

void printAllStudents(const Student students[], int count) {

    /* TODO 4
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
        /* TODO 5
           Fill in the blanks with appropriate answers. */

        //==============Your Code==============

        if (_____[1]_____) { // compare the student ID in the i-th student struct.
            int choice;
            printf("\nWhat would you like to update?\n");
            printf("1. Name\n");
            printf("2. Age\n");
            printf("3. Student ID\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            getchar(); // clear buffer

            switch (choice) {
                case 1:
                    printf("Enter new name: ");
                    scanf("%49[^\n]", _____[2]_____); //Update the name in the i-th student struct.
                    getchar(); // clear buffer
                    break;
                case 2:
                    printf("Enter new age: ");
                    scanf("%d", _____[3]_____); //Update the age in the i-th student struct.
                    getchar(); // clear buffer
                    break;
                case 3:
                    printf("Enter new student ID: ");
                    scanf("%d", _____[4]_____); //Update the student ID in the i-th student struct.
                    getchar(); // clear buffer
                    break;
                default:
                    printf("Invalid choice.\n");
                    return;
            }

        //==============Your Code==============



            printf("Update Successfully!\n");

            printStudentInfo(&students[i]);

            return;
        }
    }
    printf("Student ID %d not found.\n", id);
}

void deleteStudent(Student students[], int* count, int id) {
    for (int i = 0; i < *count; i++) {
        /* TODO 6
           Fill in the blank with appropriate answer. */

        //==============Your Code==============

        if (_____[1]_____) { // compare the student ID in the i-th student struct.
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;

        //==============Your Code==============

            printf("Delete Successfully!\n");
            return;
        }
    }
    printf("Student ID %d not found.\n", id);
}

void storeAllStudents(const Student students[], int count) {

    /* TODO 7
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    FILE* file = _____[1]_____("result.txt", _____[2]_____); //Opens the 'result.txt' file using the write mode.
    if (_____[3]_____) { // Verify that the file pointer is not NULL.
        printf("Error opening file.\n");
        return;
    }

    fprintf(file, "---Total %d Students---\n", count);
    fprintf(file, "%s %-50s %-3s %-10s\n", "No.", "Name", "Age", "Student ID");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%02d. %-50s %3d %10d\n", i + 1, _____[4]_____, _____[5]_____, _____[6]_____);
        //Print out the name, age, and class number of the i-th student struct to the result.txt file.
    }

    _____[7]_____ // Close the stream.

    //==============Your Code==============


    printf("Results saved to result.txt.\n");
}
