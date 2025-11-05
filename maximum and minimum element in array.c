// Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // assume first element as max and min
    int max = arr[0];
    int min = arr[0];

    // loop to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    // print results
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
