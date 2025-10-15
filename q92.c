//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main()
{
    char str[MAX];
    int i, freq[26] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(islower(str[i]))
        {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] > 1)
            {
                printf("The first repeating lowercase alphabet is: %c\n", str[i]);
                return 0;
            }
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
