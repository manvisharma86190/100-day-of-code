// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
    float a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("This is an Equilateral Triangle.");
    }
    else if (a == b || b == c || a == c) {
        printf("This is an Isosceles Triangle.");
    }
    else {
        printf("This is a Scalene Triangle.");
    }

    return 0;
}