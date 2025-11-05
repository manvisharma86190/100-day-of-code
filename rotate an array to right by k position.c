// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    // Make sure k is within range
    k = k % n;

    int temp[100]; // temporary array

    // Copy last k elements to temp
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy temp elements to front
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotating to the right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}