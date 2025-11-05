// Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    char temp;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    // Find the length of the string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("\nReversed string: %s\n", str);

    return 0;
}
