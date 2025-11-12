/*A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_NUMBERS 1000
int main() {
    FILE *file;
    int numbers[MAX_NUMBERS];
    int count = 0;
    int sum = 0;
    double average;

    // Open the file for reading
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read integers from the file
    while (fscanf(file, "%d", &numbers[count]) == 1 && count < MAX_NUMBERS) {
        sum += numbers[count];
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate average
    if (count > 0) {
        average = (double)sum / count;
    } else {
        average = 0.0;
    }

    // Print sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return EXIT_SUCCESS;
}