// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store the original number

    while (num > 0) {
        digit = num % 10;          // get last digit
        reversed = reversed * 10 + digit;  // build reversed number
        num = num / 10;            // remove last digit
    }

    if (original == reversed)
        printf("It is a palindrome number.");
    else
        printf("It is not a palindrome number.");

    return 0;
}
