// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, flag = 0;

    printf("Enter first string: ");
    gets(str1); // or use fgets(str1, 100, stdin);

    printf("Enter second string: ");
    gets(str2); // or use fgets(str2, 100, stdin);

    // Check if lengths are same
    if (strlen(str1) != strlen(str2)) {
        printf("\nStrings are not anagrams.\n");
        return 0;
    }

    // Count frequency of each character (assuming lowercase letters)
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;

        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
    }

    // Compare both frequency arrays
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("\nStrings are anagrams of each other.\n");
    else
        printf("\nStrings are not anagrams.\n");

    return 0;
}
