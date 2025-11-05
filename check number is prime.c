// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // assume number is prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a prime number.");
        return 0;
    }

    // check if divisible by any number from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;   // not a prime
            break;
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}
