// Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    FILE *file;          // Pointer to work with the file
    char filename[100];  // To store the filename
    char line[200];      // To store each line from the file

    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    file = fopen(filename, "r");  // "r" means read mode
    if (file == NULL) {           // If fopen returns NULL, file doesn't exist
        printf("Oops! The file does not exist.\n");
        return 1;                 // Stop the program
    }

    printf("The file exists. Its content is:\n");

    // Read the file line by line and display it
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
