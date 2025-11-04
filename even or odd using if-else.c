// Write a program to input an integer and check whether if it is even or odd using if-else.

#include <stdio.h>

int main() {
    int num;

    printf("Enter the integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}
