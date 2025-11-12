/*Write a program to take a string input. Change it to sentence case.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main()
{
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int new_sentence = 1; 

    for (int i = 0; i < len; i++)
    {
        if (new_sentence && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
            new_sentence = 0;
        }
        else
        {
            str[i] = tolower(str[i]);
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            new_sentence = 1;
        }
    }

    printf("Sentence case string: %s", str);
    return 0;
}