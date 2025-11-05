// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int currentSum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    currentSum = maxSum = arr[0]; // start with first element

    for (i = 1; i < n; i++) {
        // either start new subarray or extend current subarray
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        // update maxSum if currentSum is bigger
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of contiguous subarray is: %d\n", maxSum);

    return 0;
}
