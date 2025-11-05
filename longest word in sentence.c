// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str); // or use fgets(str, 200, stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0'; // for last word
    if (strlen(word) > maxLen) {
        strcpy(longest, word);
    }

    printf("\nLongest word: %s\n", longest);

    return 0;
}
