// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;  // to store total sum
    int numerator = 2, denominator = 3; // first term values

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // loop to add all terms
    for(i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator;

        // increase numerator by 2 and denominator by 4 each time
        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}
