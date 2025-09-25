//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

void insertSorted(int arr[], int *size, int element) {
    int i;
    for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    (*size)++;
}

int main() {
    int arr[100] = {1, 2, 4, 5};
    int size = 4;
    int element = 3;

    insertSorted(arr, &size, element);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
