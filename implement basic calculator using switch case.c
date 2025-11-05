// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero not allowed.");
                return 0;
            }
            printf("Result = %.2f", result);
            break;

        case '%':
            // For modulo, we use int since % works only on integers
            printf("Remainder = %d", (int)num1 % (int)num2);
            break;

        default:
            printf("Invalid operator! Please enter +, -, *, /, or %%.");
    }

    return 0;
}
