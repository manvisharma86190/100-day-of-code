// Search for an element in an array using linear search.


#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // enter the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break; // element found, stop searching
        }
    }

    // print result
    if(found == 1)
        printf("Element %d found at position %d.\n", key, i + 1);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
