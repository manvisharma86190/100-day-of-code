// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long product = 1;  // use long for large results

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {          // check if the number is even
            printf("%d ", i);
            product = product * i; // multiply even numbers
        }
    }

    printf("\nProduct of even numbers from 1 to %d = %lld", n, product);

    return 0;
}
