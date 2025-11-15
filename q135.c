//Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Numbers {
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN,
    FOURTEEN
};
int main() {
    enum Numbers num;
    for (num = TEN; num <= FOURTEEN; num++) {
        printf("%d\n", num);
    }
    return 0;
}
