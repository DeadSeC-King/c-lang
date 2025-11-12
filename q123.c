/*Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_FILENAME_LENGTH 100
int main() {
    char filename[MAX_FILENAME_LENGTH];
    FILE *file;
    int charCount = 0, wordCount = 0, lineCount = 0;
    bool inWord = false;
    char ch;

    // Prompt user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        // Count lines
        if (ch == '\n') {
            lineCount++;
        }

        // Count words
        if (isspace(ch)) {
            inWord = false;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
    }

    // If the file is not empty and does not end with a newline, count the last line
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Total Characters: %d\n", charCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Lines: %d\n", lineCount);

    return 0;
}