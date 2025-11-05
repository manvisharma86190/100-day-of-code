// Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 200, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("\nString after replacing spaces with hyphens:\n%s\n", str);

    return 0;
}
