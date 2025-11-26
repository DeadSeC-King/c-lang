//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Point {
    int x;
    int y;
};
int areIdentical(struct Point p1, struct Point p2) {
    return (p1.x == p2.x) && (p1.y == p2.y);
}
int main() {
    struct Point point1, point2;
    printf("Enter coordinates of first point (x y): ");
    scanf("%d %d", &point1.x, &point1.y);
    printf("Enter coordinates of second point (x y): ");
    scanf("%d %d", &point2.x, &point2.y);
    
    if (areIdentical(point1, point2)) {
        printf("The two points are identical.\n");
    } else {
        printf("The two points are not identical.\n");
    }
    
    return 0;
}