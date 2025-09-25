//Insert an element in an array at a given position.
#include <stdio.h>
#define MAX 100

void insertAtPosition(int arr[], int *size, int element, int position) {
    if (*size >= MAX) {
        printf("Array is full\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

int main() {
    int arr[MAX] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 10;
    int position = 2;

    insertAtPosition(arr, &size, element, position);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
