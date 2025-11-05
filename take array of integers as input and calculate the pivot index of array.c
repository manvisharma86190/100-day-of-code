// Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int main() {
    int arr[100], n, i, totalSum = 0, leftSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i]; // find total sum of array
    }

    // check for pivot index
    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("Pivot index is: %d\n", i);
            return 0; // stop after finding first pivot
        }

        leftSum += arr[i]; // move to next element
    }

    // if no pivot index found
    printf("No pivot index found. Output: -1\n");

    return 0;
}
