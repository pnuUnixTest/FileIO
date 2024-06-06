#ifndef PROCESS_H
#define PROCESS_H

/* TODO 8
   Fill in the blanks with appropriate answers. */

//==============Your Code==============

_____[1]_____ struct _Student { // Type define - The struct name is '_Student'.
    char name[50];
    int age;
    int studentID;
} _____[2]_____; // The struct alias is 'Student'.

//==============Your Code==============

void inputStudentInfo(Student* student);
void enrollStudentInfo(const Student* student);
void printAllStudents();

#endif // PROCESS_H
