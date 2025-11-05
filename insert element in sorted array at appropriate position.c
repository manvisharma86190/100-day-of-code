// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  // assuming max size 100
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the correct position for the new element
    for (i = n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];  // shift elements to the right
    }

    arr[i + 1] = element;  // insert the element
    n++; // increase size of array

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
