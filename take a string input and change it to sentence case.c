// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h> // for toupper() and tolower()

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    // Convert first character to uppercase if it's a letter
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = toupper(str[0]);
    }

    // Convert rest of the characters to lowercase
    for (i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
