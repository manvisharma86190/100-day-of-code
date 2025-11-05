// Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a lowercase string: ");
    gets(str); // or use fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
    }

    printf("\nString in uppercase: %s\n", str);

    return 0;
}

