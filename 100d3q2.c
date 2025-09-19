#include <stdio.h>
// write a program to swap 2 variables using third variable
int main(){
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;

}