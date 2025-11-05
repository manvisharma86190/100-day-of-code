// Write a program to take a number as input and print its equivalent binary representation.

int main() {
    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;  // store remainder (0 or 1)
        num = num / 2;        // divide by 2
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {  // print in reverse
        printf("%d", binary[j]);
    }

    return 0;
}
