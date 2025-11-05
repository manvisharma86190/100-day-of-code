/* Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve. */

#include <stdio.h>

int main() {
    int arr[100], n, i, j, prev;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");

    for (i = 0; i < n; i++) {
        prev = -1; // default if no greater element on left

        // check elements to the left
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j]; // first greater element on left
                break;         // stop searching
            }
        }

        printf("%d", prev);

        if (i != n - 1)
            printf(", "); // comma-separated output
    }

    printf("\n");
    return 0;
}

