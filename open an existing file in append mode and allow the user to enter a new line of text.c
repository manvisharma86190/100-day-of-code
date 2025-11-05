// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *file;          // Pointer to work with the file
    char filename[100];  // To store the filename
    char text[200];      // To store the text to append

    // Ask the user for the file name
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");  // "a" means add at the end
    if (file == NULL) {           // Check if file opened successfully
        printf("Oops! Could not open the file.\n");
        return 1;                 // Stop the program if file cannot open
    }

    getchar(); // To clear the newline left by scanf

    // Ask the user for the text to append
    printf("Enter the text you want to add: ");
    fgets(text, sizeof(text), stdin); // Read a whole line of text

    // Write the text at the end of the file
    fprintf(file, "%s", text);

    // Close the file
    fclose(file);

    // Let the user know it was successful
    printf("Your text has been added to the file successfully!\n");

    return 0;
}

