// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    float avg;

    // Open the file
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("numbers.txt not found!\n");
        return 0;
    }

    // Read numbers until end of file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    // Calculate average
    if (count > 0)
        avg = (float) sum / count;
    else
        avg = 0;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}