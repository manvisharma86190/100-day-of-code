// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float r, area, circum;
    // Taking the radius
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    // Calculating the area and circumference
    area = 3.14 * r * r;
    circum = 2 * 3.14 * r;
    // Dsplaying the results
    printf("area=%.2f, circum=%.2f\n", area, circum);

    return 0;
}    