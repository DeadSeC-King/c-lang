//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LENGTH 50
#define MAX_RECORDS 100
typedef struct {
    char name[MAX_NAME_LENGTH];
    int roll_number;
    float marks;
} Student;
void write_records_to_file(const char *filename, Student *students, int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }
    fclose(file);
}