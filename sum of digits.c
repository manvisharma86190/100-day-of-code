// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;      // get the last digit
        sum = sum + digit;     // add it to sum
        num = num / 10;        // remove the last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
