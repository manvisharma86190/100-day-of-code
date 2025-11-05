// Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // count even and odd numbers
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;  // increase even count
        else
            odd++;   // increase odd count
    }

    // print results
    printf("Total even numbers = %d\n", even);
    printf("Total odd numbers = %d\n", odd);

    return 0;
}
