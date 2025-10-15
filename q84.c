//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
#include <string.h>
#define MAX 100
void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}