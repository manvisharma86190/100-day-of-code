// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int arr[100], n, x, i, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // find the smallest element >= x
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;  // first element satisfying condition
        }
    }

    if (index == -1)
        printf("Ceil of %d does not exist. Output: -1\n", x);
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);

    return 0;
}
