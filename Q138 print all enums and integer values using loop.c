// Print all enum names and integer values using a loop.

#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Days d;

    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY",
        "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d = %s\n", d, names[d]);
    }

    return 0;
}