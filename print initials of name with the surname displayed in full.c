// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name); // you can also use fgets(name, 100, stdin);

    // find last space (surname starts after this)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("\nInitials with Surname: ");

    // print first letter of first name
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    // print initials of middle names (before surname)
    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c. ", name[i + 1]);
    }

    // print surname in full
    if (lastSpace != -1)
        printf("%s", &name[lastSpace + 1]);

    return 0;
}
