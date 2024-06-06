#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "process.h"

void inputStudentInfo(Student* student) {

    /* TODO 1
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    printf("Enter student name: ");
    scanf("%49[^\n]", _____[1]_____); //Store the name in the Student struct.
    while (getchar() != '\n'); // clear buffer

    printf("Enter student age: ");
    scanf("%d", _____[2]_____); //Store the age in the Student struct.
    while (getchar() != '\n'); // clear buffer

    printf("Enter student ID: ");
    scanf("%d", _____[3]_____); //Store the studentID in the Student struct.
    while (getchar() != '\n'); // clear buffer

    //==============Your Code==============
}

void enrollStudentInfo(const Student* student) {

    /* TODO 2
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    FILE* file = _____[1]_____("result.txt", _____[2]_____); //Open the 'result.txt' file using the append mode.
    if (_____[3]_____) { // Verify that the file pointer is not NULL.
        printf("Error opening file.\n");
        return;
    }

    fprintf(_____[4]_____, "%s %d %d\n", _____[5]_____, _____[6]_____, _____[7]_____);
    //Print out the name, age, and class number of the i-th student struct to the result.txt file.

    _____[8]_____ // Close the stream.
}

void printAllStudents() {

    Student student;
    int idx = 1;

    /* TODO 3
       Fill in the blanks with appropriate answers. */

    //==============Your Code==============

    FILE* file = _____[1]_____("result.txt", _____[2]_____); //Open the 'result.txt' file using the read mode.
    if (_____[3]_____) { // Verify that the file pointer is not NULL.
        printf("No students enrolled yet.\n");
        return;
    }

    printf("%s %-50s %-3s %-10s\n", "No.", "Name", "Age", "Student ID");

    while (fscanf(_____[4]_____, "%49s %d %d", _____[5]_____ , _____[6]_____ , _____[7]_____) == _____[8]_____) { // Store the information from the file.
        printf("%02d. %-50s %3d %10d\n", idx, student.name, student.age, student.studentID);
        idx++;
    }

    _____[9]_____ // Close the stream.

    //==============Your Code==============
}
