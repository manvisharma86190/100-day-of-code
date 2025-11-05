// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    int len = strlen(str);

    printf("\nAll substrings are:\n");

    // pick each starting point
    for (i = 0; i < len; i++) {
        // pick each ending point
        for (j = i; j < len; j++) {
            // print characters from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
