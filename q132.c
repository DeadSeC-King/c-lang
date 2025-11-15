//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
} Operation;
int main() {
    Operation op;
    int a, b, result;

    printf("Select operation:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    scanf("%d", (int*)&op);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch(op) {
        case ADD:
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid operation selected.\n");
            break;
    }

    return 0;
}
