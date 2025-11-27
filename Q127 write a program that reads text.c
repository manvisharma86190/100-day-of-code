// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *in, *out;
    char ch;

    // Open input file for reading
    in = fopen("input.txt", "r");

    // Check if input file exists
    if (in == NULL) {
        printf("input.txt not found!\n");
        return 0;
    }

    // Open output file for writing
    out = fopen("output.txt", "w");

    // Read each character, convert, and write
    while ((ch = fgetc(in)) != EOF) {
        ch = toupper(ch);      // convert to uppercase
        fputc(ch, out);        // write to output file
    }

    // Close both files
    fclose(in);
    fclose(out);

    printf("Conversion complete! Check output.txt\n");

    return 0;
}