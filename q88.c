//Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
#define MAX 100
void replaceSpaces(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}