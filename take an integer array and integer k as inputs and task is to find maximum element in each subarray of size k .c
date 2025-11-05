// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter size of subarray k: ");
    scanf("%d", &k);

    printf("Maximum elements in each subarray of size %d: ", k);

    // loop over each subarray of size k
    for (i = 0; i <= n - k; i++) {
        max = arr[i]; // start with first element of the window

        // check the rest of the elements in the window
        for (j = i; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j]; // update max if larger found
        }

        printf("%d", max);
        if (i != n - k)
            printf(" "); // space-separated output
    }

    printf("\n");
    return 0;
}
