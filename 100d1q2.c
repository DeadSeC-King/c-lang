#include <stdio.h>

int main() {
    int a, b;
    printf("input number a and b \n");
    scanf("%d %d", &a, &b);
    printf("sum is %d \n", (a + b));
    printf("diff is %d \n", (a - b));
    printf("multi is %d \n", (a * b));
    printf("division is %d \n", (a / b));

    return 0;
}
