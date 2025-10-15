//Reverse a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], rev[100];
    int i, len, index, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    len = strlen(str);
    index = 0;
    temp = len - 1;

    while (temp >= 0)
    {
        rev[index] = str[temp];
        index++;
        temp--;
    }
    rev[index] = '\0'; // Null-terminate the reversed string

    printf("Reversed string: %s\n", rev);

    return 0;
}