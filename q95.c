//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main()
{
    char str1[MAX], str2[MAX];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    // Check if lengths are equal
    if(strlen(str1) != strlen(str2))
    {
        printf("The strings are not rotations.\n");
        return 0;
    }
    // Concatenate str1 with itself
    char temp[MAX * 2];
    strcpy(temp, str1);
    strcat(temp, str1);
    // Check if str2 is a substring of temp
    if(strstr(temp, str2) != NULL)
    {
        printf("The strings are rotations.\n");
    }
    else
    {
        printf("The strings are not rotations.\n");
    }
    return 0;
}
