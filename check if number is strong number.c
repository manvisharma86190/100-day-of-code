// Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // store original number

    while (num > 0) {
        digit = num % 10; // extract last digit
        fact = 1;

        // find factorial of the digit
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact; // add factorial to sum
        num = num / 10;   // remove last digit
    }

    // check if sum of factorials equals the original number
    if (sum == temp)
        printf("%d is a Strong Number.", temp);
    else
        printf("%d is not a Strong Number.", temp);

    return 0;
}
