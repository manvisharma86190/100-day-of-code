// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long fact = 1;  // use long for big results

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
    } 
    else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;  // multiply numbers from 1 to n
        }
        printf("Factorial of %d = %lld", n, fact);
    }

    return 0;
}
