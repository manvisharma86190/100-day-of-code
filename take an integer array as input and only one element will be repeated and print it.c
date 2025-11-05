// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int repeated = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n); // n = size of array (includes the repeated element)

    printf("Enter %d elements (numbers from 1 to %d with one repeated): ", n, n-1);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // XOR all array elements
    for (i = 0; i < n; i++) {
        repeated ^= arr[i];
    }

    // XOR all numbers from 1 to n-1
    for (i = 1; i <= n-1; i++) {
        repeated ^= i;
    }

    printf("The repeated element is: %d\n", repeated);

    return 0;
}