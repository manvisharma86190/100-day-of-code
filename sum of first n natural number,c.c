// Write a program  to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0, i;

    //Taking the number
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 1; i <=n; i++) {
        sum = sum + i;
    }
    // Displaying result
    printf("Sum of first %d natural number = %d\n", n, sum);
    
    return 0;
}    