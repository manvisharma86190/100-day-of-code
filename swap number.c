// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;
   
    //Taking the numbaers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping process
    temp = a;   // store value of a in temp
    a = b;      // put value of b in a
    b = temp;   // put value of temp (old a) in b

    //Displaying results
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
