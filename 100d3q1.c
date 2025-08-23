#include <stdio.h>

int main() {
    int choice;
    float celsius, fahrenheit;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;   // Formula: F = (C × 9/5) + 32
        printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
    }
    else if(choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;   // Formula: C = (F − 32) × 5/9
        printf("Temperature in Celsius = %.2f\n", celsius);
    }
    else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
