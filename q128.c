/*ead a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX_FILENAME_LENGTH 100
int main() {
    char filename[MAX_FILENAME_LENGTH];
    FILE *file;
    int vowels = 0, consonants = 0;
    char ch;

    // Prompt user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read characters from the file and count vowels and consonants
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for easier comparison
        if (isalpha(ch)) { // Check if character is an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return EXIT_SUCCESS;
}