// Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name); // or use fgets(name, 100, stdin);

    printf("\nInitials: ");

    // print first letter of the name
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    // print the letter after each space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
    }

    return 0;
}









