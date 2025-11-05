// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freqS[26] = {0}, freqT[26] = {0};
    int i, n, m, isAnagram = 1;

    // Input strings
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    n = strlen(s);
    m = strlen(t);

    // If lengths are different, they cannot be anagrams
    if (n != m) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character for s
    for (i = 0; i < n; i++) {
        freqS[s[i] - 'a']++;
    }

    // Count frequency of each character for t
    for (i = 0; i < m; i++) {
        freqT[t[i] - 'a']++;
    }

    // Compare frequencies
    for (i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
