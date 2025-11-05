// Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare an array of size n

    // input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // calculate sum
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
