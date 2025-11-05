// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d odd numbers are:\n", n);

    for (i = 1; i <= n; i++) {
        int odd = 2 * i - 1;  // formula for odd number
        printf("%d ", odd);
        sum = sum + odd;      // add each odd number to sum
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
