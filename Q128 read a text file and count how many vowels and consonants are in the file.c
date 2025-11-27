// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>   // for isalpha(), tolower()

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file
    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }


    // Read each character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);   // convert to lowercase for easy checking

        // Check if character is alphabet
        if (isalpha(ch)) {
            // Check if vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++; 
            }
        }
    }

    fclose(fp);

    // Display results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
