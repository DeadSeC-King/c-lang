//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Point {
    int x;
    int y;
};
int main() {
    struct Point p1;
    struct Point *ptr = &p1;
    ptr->x = 10;
    ptr->y = 20;

    printf("Point coordinates: x = %d, y = %d\n", ptr->x, ptr->y);

    return 0;
}
