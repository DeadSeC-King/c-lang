//Return a structure containing top student's details from a function.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
struct Student getTopStudent(struct Student students[], int count) {
    struct Student topStudent = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}
int main() {
    struct Student students[3] = {
        {"Alice", 20, 85.5},
        {"Bob", 22, 90.0},
        {"Charlie", 19, 88.0}
    };
    struct Student topStudent = getTopStudent(students, 3);
    printf("Top Student:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Age: %d\n", topStudent.age);
    printf("Marks: %.2f\n", topStudent.marks);
    return 0;
}
