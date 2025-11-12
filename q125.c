/*Open an existing file in append mode and allow the user to enter a new line of text.
 Append the text at the end without overwriting existing content.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char buffer[256];

    // Open the file in append mode
    file = fopen("example.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Prompt the user for input
    printf("Enter a line of text to append to the file:\n");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Append the text to the file
        fputs(buffer, file);
    } else {
        printf("Error reading input.\n");
    }

    // Close the file
    fclose(file);
    printf("Text appended successfully.\n");

    return EXIT_SUCCESS;
}