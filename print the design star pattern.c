/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */

  #include <stdio.h>

int main() {
    int i, j, space;

    // upper part of the diamond
    for(i = 1; i <= 4; i++) {
        // print spaces
        for(space = i; space < 4; space++) {
            printf(" ");
        }

        // print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    // lower part of the diamond
    for(i = 3; i >= 1; i--) {
        // print spaces
        for(space = 4; space > i; space--) {
            printf(" ");
        }

        // print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
 
