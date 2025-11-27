// Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    char name[50];
    FILE *fp;
    char ch;

    printf("Enter filename: ");
    scanf("%s", name);

    fp = fopen(name, "r");   // open file for reading

    if (fp == NULL) {        // file not found
        printf("File not found!\n");
    } else {
        printf("File content:\n");

        while ((ch = fgetc(fp)) != EOF) {   // read each character
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}