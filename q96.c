//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void reverseWord(char* start, char* end)
{
    char temp;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char str[MAX];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    char* word_start = NULL;
    char* temp = str;
    while(*temp)
    {
        if(word_start == NULL && isalpha(*temp))
        {
            word_start = temp;
        }
        if(word_start && (!isalpha(*temp) || *(temp + 1) == '\0'))
        {
            reverseWord(word_start, (isalpha(*temp) ? temp : temp - 1));
            word_start = NULL;
        }
        temp++;
    }
    printf("Sentence after reversing each word: %s\n", str);
    return 0;
}
