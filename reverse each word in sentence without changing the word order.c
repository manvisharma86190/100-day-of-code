// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, end = 0, i;
    char temp;

    printf("Enter a sentence: ");
    gets(str); // or use fgets(str, 200, stdin);

    while (str[end] != '\0') {
        // find end of each word
        if (str[end] == ' ' || str[end + 1] == '\0') {
            int wordEnd = (str[end] == ' ') ? end - 1 : end;
            int wordStart = start;

            // reverse current word
            while (wordStart < wordEnd) {
                temp = str[wordStart];
                str[wordStart] = str[wordEnd];
                str[wordEnd] = temp;
                wordStart++;
                wordEnd--;
            }

            // move to next word
            start = end + 1;
        }
        end++;
    }

    printf("\nSentence after reversing each word:\n%s\n", str);

    return 0;
}