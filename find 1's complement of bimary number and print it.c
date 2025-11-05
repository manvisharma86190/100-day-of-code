// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[50];  // to store binary number as a string
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);  // input binary number as string

    // find 1's complement
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!");
            return 0;
        }
    }

    printf("1's Complement = %s", binary);

    return 0;
}