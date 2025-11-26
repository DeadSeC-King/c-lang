//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define FILE_NAME "employees.dat"
struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    float salary;
};
void writeEmployeeData(const char *filename, struct Employee *emp, size_t count) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Failed to open file for writing");
        exit(EXIT_FAILURE);
    }
    fwrite(emp, sizeof(struct Employee), count, file);
    fclose(file);
}
void readEmployeeData(const char *filename, struct Employee *emp, size_t count) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Failed to open file for reading");
        exit(EXIT_FAILURE);
    }
    fread(emp, sizeof(struct Employee), count, file);
    fclose(file);
}
int main() {
    struct Employee employees[3] = {
        {1, "Alice", 50000.0},
        {2, "Bob", 60000.0},
        {3, "Charlie", 70000.0}
    };
    writeEmployeeData(FILE_NAME, employees, 3);
    struct Employee readEmployees[3];
    readEmployeeData(FILE_NAME, readEmployees, 3);
    printf("Employee Data:\n");
    for (size_t i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", readEmployees[i].id, readEmployees[i].name, readEmployees[i].salary);
    }
    return 0;
}