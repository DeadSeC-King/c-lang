//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;
typedef struct {
    char name[50];
    Gender gender;
} Person;
void printGender(Gender gender) {
    switch (gender) {
        case MALE:
            printf("Gender: Male\n");
            break;  
        case FEMALE:
            printf("Gender  : Female\n");
            break;  
        case OTHER:
            printf("Gender: Other\n");
            break;
    }
}