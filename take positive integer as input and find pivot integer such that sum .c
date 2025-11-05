// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n, x, leftSum, rightSum, totalSum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    totalSum = n * (n + 1) / 2; // sum of 1 to n

    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;        // sum from 1 to x
        rightSum = totalSum - leftSum + x; // sum from x to n

        if (leftSum == rightSum) {
            printf("Pivot integer is: %d\n", x);
            return 0;
        }
    }

    printf("No pivot integer found. Output: -1\n");
    return 0;
}
