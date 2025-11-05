// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the smaller number
    int min = (num1 < num2) ? num1 : num2;

    // Check from 1 to the smaller number
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;   // store the greatest number that divides both
        }
    }

    printf("HCF (GCD) of %d and %d is: %d", num1, num2, hcf);

    return 0;
}
