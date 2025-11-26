//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
#include <string.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};
void printEmployeeDetails(struct Employee emp) {
    printf("Employee Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
}
int main() {
    struct Employee emp;
    strcpy(emp.name, "John Doe");
    emp.id = 12345;
    emp.joiningDate.day = 15;
    emp.joiningDate.month = 6;
    emp.joiningDate.year = 2020;
    printEmployeeDetails(emp);

    return 0;
}