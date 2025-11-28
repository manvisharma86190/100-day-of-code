// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    enum Role r;

    printf("Select role:\n");
    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &r);

    switch (r) {
        case ADMIN:
            printf("Hello Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Hi Guest! You can only view content.\n");
            break;

        default:
            printf("Invalid role selected!\n");
    }

    return 0;
}
