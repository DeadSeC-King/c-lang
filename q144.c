//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Person {
    char name[50];
    int age;
    float height;
};
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}
int main() {
    struct Person person1 = {"Alice", 30, 5.5};
    printPerson(person1);
    return 0;
}
