// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, sum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter size of subarray k: ");
    scanf("%d", &k);

    maxSum = 0; // will store the maximum sum

    for (i = 0; i <= n - k; i++) { // start of subarray
        sum = 0;
        for (j = i; j < i + k; j++) { // sum of k elements
            sum += arr[j];
        }
        if (i == 0 || sum > maxSum)
            maxSum = sum; // update maxSum
    }

    printf("Maximum sum of subarrays of size %d is: %d\n", k, maxSum);

    return 0;
}
