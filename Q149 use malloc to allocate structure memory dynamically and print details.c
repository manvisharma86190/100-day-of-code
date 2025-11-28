// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // dynamically allocate memory for one structure
    struct Student *s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // taking input
    printf("Enter student name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // printing details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // free allocated memory
    free(s);

    return 0;
}