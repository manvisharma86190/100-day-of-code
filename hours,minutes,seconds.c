// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;          // 1 hour = 3600 seconds
    seconds = seconds % 3600;        // remaining seconds after hours

    minutes = seconds / 60;          // 1 minute = 60 seconds
    seconds = seconds % 60;          // remaining seconds after minutes

    printf("Time = %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
