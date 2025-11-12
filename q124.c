/*Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().
*/
#include <stdio.h>
int main() {
    char sourceFileName[100], destFileName[100];
    FILE *sourceFile, *destFile;
    int ch;

    // Take filenames from the user
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter destination file name: ");
    scanf("%s", destFileName);

    // Open source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFileName);
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFileName);
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("Content copied from %s to %s successfully.\n", sourceFileName, destFileName);

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}