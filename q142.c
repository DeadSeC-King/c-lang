//Store details of 5 students in an array of structures and print all.
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

 
    printf("\nDetails of all students:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}