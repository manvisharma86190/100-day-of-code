// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0; // to store the total sum

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // loop to calculate the sum of the series
    for(i = 1; i <= n; i++) {
        sum = sum + (float)(2 * i - 1) / (2 * i); // formula for each term
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}
