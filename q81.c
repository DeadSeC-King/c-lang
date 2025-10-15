//Count characters in a string without using built-in length functions.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Counting characters manually
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("The length of the string is: %d\n", count);
    return 0;
}