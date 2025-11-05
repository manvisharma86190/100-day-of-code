// Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;

    // Initialize first and second
    first = second = -99999; // assuming all numbers are greater than this

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -99999) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
