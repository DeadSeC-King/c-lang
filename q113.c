/*Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies.
 Print "Anagram" if they are, otherwise "Not Anagram".
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool areAnagrams(char *s, char *t) {
    int count[26] = {0};
    for (int i = 0; s[i] && t[i]; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}