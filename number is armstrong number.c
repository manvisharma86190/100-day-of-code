// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>   // for using pow() function

int main() {
    int num, original, remainder, n = 0;
    float result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    // Calculate sum of each digit raised to the power of n
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    // Check Armstrong condition
    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
