// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long num;
    int digit, count[10] = {0}, i, maxDigit = 0;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    // Make sure the number is positive
    if (num < 0) {
        num = -num;
    }

    // Count occurrences of each digit
    while (num > 0) {
        digit = num % 10;      // Get last digit
        count[digit]++;        // Increase its count
        num = num / 10;        // Remove last digit
    }

    // Find the digit with maximum frequency
    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("The digit that occurs most is: %d\n", maxDigit);
    printf("It occurs %d times.\n", count[maxDigit]);

    return 0;
}
