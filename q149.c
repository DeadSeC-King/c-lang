//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student *studentPtr;
    studentPtr = (struct Student *)malloc(sizeof(struct Student));
    if (studentPtr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    studentPtr->id = 1;
    snprintf(studentPtr->name, sizeof(studentPtr->name), "Krishna");
    studentPtr->marks = 95.5;
    printf("Student ID: %d\n", studentPtr->id);
    printf("Student Name: %s\n", studentPtr->name);
    printf("Student Marks: %.2f\n", studentPtr->marks);
    free(studentPtr);
    return 0;
}