/*Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.*/
#include <stdio.h>
typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;
void displayMessage(UserRole role) {
    switch(role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Unknown role.\n");
    }
}
int main() {
    UserRole role1 = ADMIN;
    UserRole role2 = USER;
    UserRole role3 = GUEST;

    displayMessage(role1);
    displayMessage(role2);
    displayMessage(role3);

    return 0;
}
