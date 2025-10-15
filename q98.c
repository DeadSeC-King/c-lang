//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main()
{
    char name[MAX];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    // Remove newline character if present
    name[strcspn(name, "\n")] = 0;

    char* token = strtok(name, " ");
    while(token != NULL)
    {
        if(strlen(token) > 1)
        {
            printf("%c. ", toupper(token[0]));
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}
