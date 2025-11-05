// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, firstNeg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter size of subarray k: ");
    scanf("%d", &k);

    printf("First negative in each subarray: ");

    // loop over each subarray of size k
    for (i = 0; i <= n - k; i++) {
        firstNeg = 0; // default if no negative found

        // check elements in current window
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break; // stop at first negative
            }
        }

        printf("%d", firstNeg);
        if (i != n - k)
            printf(" "); // space-separated output
    }

    printf("\n");
    return 0;
}
