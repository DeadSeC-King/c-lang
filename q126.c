/*Ask the user for a filename. Check if it exists by trying to open it in read mode.
 If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/
#include <stdio.h>
int main() {
    char filename[100];
    FILE *file;
    char ch;

    // Ask the user for a filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        // If the file pointer is NULL, print an error message
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read and display the content of the file
    printf("Contents of the file %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);
    return 0;
}