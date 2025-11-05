/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */

    #include <stdio.h>

int main() {
    int i, j, space;

    // outer loop for rows
    for(i = 5; i >= 1; i--) {
        // print spaces first
        for(space = 5; space > i; space--) {
            printf(" ");
        }

        // print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n"); // move to next line after each row
    }

    return 0;
}

