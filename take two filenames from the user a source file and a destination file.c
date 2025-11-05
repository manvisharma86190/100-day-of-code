// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;

    // Take source and destination filenames from the user
    printf("Enter the source filename: ");
    scanf("%s", sourceName);

    printf("Enter the destination filename: ");
    scanf("%s", destName);

    // Open the source file in read mode
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Could not create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully!\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
