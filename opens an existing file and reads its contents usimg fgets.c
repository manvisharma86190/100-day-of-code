// Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *file;
    char line[100];  // To store each line from the file

    // Open the file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {  // Check if file opened successfully
        printf("Oops! Could not open the file.\n");
        return 1;  // Exit if file not found
    }

    printf("Contents of info.txt:\n");

    // Read the file line by line until the end
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // Print each line
    }

    // Close the file
    fclose(file);

    return 0;
}
