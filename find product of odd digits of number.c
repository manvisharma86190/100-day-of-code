// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit;
    int product = 1; // start with 1 because it’s multiplication

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;        // get last digit

        if (digit % 2 != 0) {    // check if digit is odd
            product = product * digit;  // multiply with product
        }

        num = num / 10;          // remove last digit
    }

    printf("Product of odd digits = %d", product);

    return 0;
}
