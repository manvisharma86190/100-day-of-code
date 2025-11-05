// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // find the bigger number
    if (num1 > num2)
        max = num1;
    else
        max = num2;

    // keep checking until we find a common multiple
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d", num1, num2, max);
            break; // stop when LCM found
        }
        max++; // check next number
    }

    return 0;
}

