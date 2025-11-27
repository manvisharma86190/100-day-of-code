// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status result;

    // You can change this to SUCCESS, FAILURE, or TIMEOUT
    result = SUCCESS;

    if (result == SUCCESS) {
        printf("Operation Successful!\n");
    }
    else if (result == FAILURE) {
        printf("Operation Failed!\n");
    }
    else if (result == TIMEOUT) {
        printf("Operation Timed Out!\n");
    }

    return 0;
}
