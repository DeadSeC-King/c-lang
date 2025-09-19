//Read and print elements of a one-dimensional array.
#include <stdio.h>
#define MAX 100
int main(void)
{
    int arr[MAX];
    int n, i;

    //Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Read elements of array
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //Print elements of array
    printf("Elements of array are: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}