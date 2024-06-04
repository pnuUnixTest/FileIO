#ifndef PROCESS_H
#define PROCESS_H

#define MAX_STUDENTS 100

/* TODO 8
   Fill in the blanks with appropriate answers. */

//==============Your Code==============

_____[1]_____ struct _Student { // Type define - The struct name is '_Student'.
    char name[50];
    int age;
    int studentID;
} _____[2]_____; // The struct alias is 'Student'.

//==============Your Code==============

void loadStudentInfo(Student students[], int* count);
void inputStudentInfo(Student* student, int* count);
void printStudentInfo(const Student* student);
void printAllStudents(const Student students[], int count);
void updateStudentInfo(Student students[], int count, int id);
void deleteStudent(Student students[], int* count, int id);
void storeAllStudents(const Student students[], int count);

#endif // PROCESS_H
