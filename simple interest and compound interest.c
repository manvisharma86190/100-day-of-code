// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main() {
    float principal, rate, time, simpleinterest, compoundinterest;

    printf("Enter principal amount, rate of interest, time(in years): ");
    scanf("%f %f %f", &principal, &rate, &time);
    
    // Formula for simple interest
    simpleinterest = (principal * rate * time) / 100;

    // Formula for compound interest
    compoundinterest = principal * (pow((1 + rate / 100), time)) - principal;

    //Displaying the result
    printf("\nSimple Interest = %.2f", simpleinterest);
    printf("\nCompound Interest = %.2f\n", compoundinterest);

    return 0;
}