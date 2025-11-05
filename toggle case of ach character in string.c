// Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 200, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert lowercase to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // convert uppercase to lowercase
        }
    }

    printf("\nString after toggling case:\n%s\n", str);

    return 0;
}
