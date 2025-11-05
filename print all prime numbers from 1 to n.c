// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // loop through numbers from 2 to n
    for(i = 2; i <= n; i++) {
        isPrime = 1; // assume the number is prime

        // check divisibility from 2 to i/2
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        // if still prime, print it
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
