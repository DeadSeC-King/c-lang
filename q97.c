//Print the initials of a name
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
    printf("Initials: ");
    for(int i = 0; name[i] != '\0'; i++)
    {
        if(i == 0 || (name[i-1] == ' ' && isalpha(name[i])))
        {
            printf("%c. ", toupper(name[i]));
        }
    }
    printf("\n");
    return 0;
}
