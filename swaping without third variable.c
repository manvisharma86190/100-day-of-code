// Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Taking the numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    //Swaping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    //Displaying results
    printf("a=%d, b=%d\n", a, b);

    return 0;
}    