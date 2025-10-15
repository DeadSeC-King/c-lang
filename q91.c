//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main()
{
    char str[MAX];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(!strchr("aeiouAEIOU", str[i]))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("String after removing vowels: %s\n", str);
    return 0;
}
