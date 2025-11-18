//Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Colors { RED = 1, GREEN = 2, BLUE = 3 };
int main() {
    printf("RED: %d\n", RED);
    printf("GREEN: %d\n", GREEN);
    printf("BLUE: %d\n", BLUE);
    return 0;
}
