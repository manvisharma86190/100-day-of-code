// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

enum days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum days d;

    printf("Days of the week with their integer values:\n");

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d ", d);  // print integer value

        // print day name
        switch (d) {
            case SUNDAY:    printf("= SUNDAY\n"); break;
            case MONDAY:    printf("= MONDAY\n"); break;
            case TUESDAY:   printf("= TUESDAY\n"); break;
            case WEDNESDAY: printf("= WEDNESDAY\n"); break;
            case THURSDAY:  printf("= THURSDAY\n"); break;
            case FRIDAY:    printf("= FRIDAY\n"); break;
            case SATURDAY:  printf("= SATURDAY\n"); break;
        }
    }

    return 0;
}