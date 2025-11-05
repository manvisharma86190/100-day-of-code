/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */

int main() {
    int i, j, space;

    // upper part of the diamond
    for(i = 1; i <= 5; i++) {
        // print spaces
        for(space = i; space < 5; space++) {
            printf(" ");
        }

        // print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    // lower part of the diamond
    for(i = 4; i >= 1; i--) {
        // print spaces
        for(space = 5; space > i; space--) {
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

