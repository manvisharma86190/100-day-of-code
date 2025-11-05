// Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if character is alphabet
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert to lowercase for easy comparison
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d\n", consonants);

    return 0;
}
