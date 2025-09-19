#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers count = %d\n", positive);
    printf("Negative numbers count = %d\n", negative);
    printf("Zero elements count   = %d\n", zero);

    return 0;
}
