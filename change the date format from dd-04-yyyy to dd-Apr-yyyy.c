// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <string.h>

int main() {
    char date[15];
    int day, month, year;

    // Input the date
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Array of month names
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Print in new format
    printf("New Date Format: %02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
