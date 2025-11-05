// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  // assuming max size 100
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to right to make space
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;  // Insert element at correct position
    n++; // increase size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
