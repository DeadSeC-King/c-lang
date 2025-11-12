/*Write a program to take an integer array as input.
 Only one element will be repeated. Print the repeated element.
  Try to find the result in one single iteration.
*/
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int n, i;
    int repeatedElement = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements (one element will be repeated):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int occurrence[MAX_SIZE] = {0};

    for (i = 0; i < n; i++) {
        occurrence[arr[i]]++;
        if (occurrence[arr[i]] == 2) {
            repeatedElement = arr[i];
            break;
        }
    }

    if (repeatedElement != -1) {
        printf("The repeated element is: %d\n", repeatedElement);
    } else {
        printf("No repeated element found.\n");
    }

    return 0;
}