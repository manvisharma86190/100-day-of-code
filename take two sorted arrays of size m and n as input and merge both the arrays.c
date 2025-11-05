// Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int m, n, i = 0, j = 0, k = 0;

    // Input first array
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    printf("Enter %d elements in sorted order: ", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (j = 0; j < n; j++) {
        scanf("%d", &arr2[j]);
    }

    // Merge arrays
    i = 0; j = 0; k = 0;
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements from arr1
    while (i < m)
        merged[k++] = arr1[i++];

    // Copy remaining elements from arr2
    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged array
    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d", merged[i]);
        if (i != m + n - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
