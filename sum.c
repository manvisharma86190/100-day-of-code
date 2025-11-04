// Write a program to input two numbers and display their output.

#include <stdio.h>

int main(){
    int a, b, sum;

    // Taking the inputs
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); 

    // Calculating numbers
    sum = a + b;
    //Displaying results
    printf("Sum=%d\n", sum);

    return 0;
}