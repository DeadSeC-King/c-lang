//Find and print the student with the highest marks.
#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 5
#define NAME_LENGTH 50
struct Student {
    char name[NAME_LENGTH];
    int age;
    float marks;
};
int main() {
    struct Student students[MAX_STUDENTS];
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); 
    }

    int topStudentIndex = 0;
    for (int i = 1; i < MAX_STUDENTS; i++) {
        if (students[i].marks > students[topStudentIndex].marks) {
            topStudentIndex = i;
        }
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[topStudentIndex].name);
    printf("Age: %d\n", students[topStudentIndex].age);
    printf("Marks: %.2f\n", students[topStudentIndex].marks);

    return 0;
}