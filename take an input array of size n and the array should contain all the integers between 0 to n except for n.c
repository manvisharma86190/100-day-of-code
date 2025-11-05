// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0, totalSum, missing;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements (numbers from 0 to %d except one missing): ", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // sum of array elements
    }

    // Total sum of numbers from 0 to n
    totalSum = n * (n + 1) / 2;

    // Missing number
    missing = totalSum - sum;

    printf("The missing number is: %d\n", missing);

    return 0;
}
