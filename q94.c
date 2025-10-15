//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main()
{
    char str[MAX];
    char longestWord[MAX];
    int i, j = 0, maxLength = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
        {
            longestWord[j++] = str[i];
        }
        else
        {
            longestWord[j] = '\0';
            if(j > maxLength)
            {
                maxLength = j;
            }
            j = 0;
        }
    }
    // Check the last word
    longestWord[j] = '\0';
    if(j > maxLength)
    {
        maxLength = j;
    }
    printf("The longest word length is: %d\n", maxLength);
    return 0;
}
