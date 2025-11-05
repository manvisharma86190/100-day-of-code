// Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 200, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // check if character is NOT a vowel
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            str[j] = str[i]; // keep only non-vowel characters
            j++;
        }
    }

    str[j] = '\0'; // end the new string

    printf("\nString after removing vowels:\n%s\n", str);

    return 0;
}