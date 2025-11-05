// Write a program to find the roots of a quadratic equation and categorize them.

#include <math.h>

int main() {
    float a, b, c, D, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculating discriminant 
    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f and Root2 = %.2f", root1, root2);
    }
    else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f", root1);
    }
    else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-D) / (2 * a);
        printf("Roots are imaginary.\n");
        printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
