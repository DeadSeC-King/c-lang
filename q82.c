//Print each character of a string on a new line.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    for (int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}