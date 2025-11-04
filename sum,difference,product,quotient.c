// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int a, b, sum, diff, product, quotient;

    // Taking two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    //Calculating sum, difference, product, quotient
    sum = a + b;
    diff = a - b;
    product = a * b;

    // Checking division by zero
    if (b != 0)
        quotient = a / b;
    else 
        quotient = 0;

    // Displaying the results
    if (b != 0)
       printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
    else
       printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined(division by zero)\n", sum, diff, product);

    return 0;
}       
        



