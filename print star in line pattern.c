/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */ 

#include <stdio.h>

int main() {
    int i, j;

    // increasing part
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between sections
    }

    // decreasing part
    for(i = 4; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between sections
    }

    return 0;
}


