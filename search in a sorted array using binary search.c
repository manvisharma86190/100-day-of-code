// Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary Search logic
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        } 
        else if (arr[mid] < key) {
            low = mid + 1;  // Search in right half
        } 
        else {
            high = mid - 1; // Search in left half
        }
    }

    printf("Element not found.\n");
    return 0;
}
