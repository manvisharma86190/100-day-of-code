// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, i, j, maxLen = 0;

    printf("Enter the string: ");
    scanf("%s", s);

    n = strlen(s);

    for (i = 0; i < n; i++) {
        int visited[256] = {0}; // keep track of characters
        int currentLen = 0;

        for (j = i; j < n; j++) {
            if (visited[(int)s[j]] == 1)
                break; // character repeats, stop current substring
            visited[(int)s[j]] = 1;
            currentLen++;
        }

        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
