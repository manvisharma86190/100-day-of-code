// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[200];
    int count[26] = {0}; // to count lowercase letters
    int i, index, found = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 200, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            index = str[i] - 'a';
            count[index]++;

            if (count[index] == 2) { // found first repeating letter
                printf("\nFirst repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("\nNo repeating lowercase alphabet found.\n");

    return 0;
}
