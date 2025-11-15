//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;
void printStatusMessage(Status status) {
    switch (status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }
}
int main() {
    Status status1 = SUCCESS;
    Status status2 = FAILURE;
    Status status3 = TIMEOUT;

    printStatusMessage(status1);
    printStatusMessage(status2);
    printStatusMessage(status3);

    return 0;
}