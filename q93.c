//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main()
{
    char str1[MAX], str2[MAX];
    int i, freq[26] = {0};
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    // Count frequency of each character in the first string
    for(i = 0; str1[i] != '\0'; i++)
    {
        if(isalpha(str1[i]))
        {
            freq[tolower(str1[i]) - 'a']++;
        }
    }
    // Subtract frequency based on the second string
    for(i = 0; str2[i] != '\0'; i++)
    {
        if(isalpha(str2[i]))
        {
            freq[tolower(str2[i]) - 'a']--;
        }
    }
    // Check if all frequencies are zero
    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}
