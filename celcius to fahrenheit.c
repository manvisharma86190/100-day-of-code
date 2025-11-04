// Write a program to convert temperature from celcius to fahrenheit.

#include <stdio.h>

int main() {
    float celcius, fahrenheit;
    //Taking the temperature
    printf("Enter the temperature in celcius: ");
    scanf("%f", &celcius);
    // Calculating formula
    fahrenheit = (celcius * 9 / 5) + 32;
    // Displaying output
    printf("Temperature in fahrenheit = %.2f\n", fahrenheit);

    return 0;
}    

