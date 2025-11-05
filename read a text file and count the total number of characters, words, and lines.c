// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <ctype.h>  // for isspace()

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // Flag to track if we are inside a word

    // Open the file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;            // Count every character

        if (ch == '\n') {
            lines++;             // Count newlines as lines
        }

        if (isspace(ch)) {
            inWord = 0;          // Space or newline ends a word
        } else if (inWord == 0) {
            words++;             // Start of a new word
            inWord = 1;
        }
    }

    // Close the file
    fclose(file);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}


