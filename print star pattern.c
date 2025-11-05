/* Write a program to print the following pattern:
*
**
***
****
***** */

#include <stdio.h>

int main() {
    int i, j;

    // outer loop for rows
    for(i = 1; i <= 5; i++) {
        // inner loop for printing stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}

