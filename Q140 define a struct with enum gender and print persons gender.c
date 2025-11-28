// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender:\n");
    printf("0. Male\n");
    printf("1. Female\n");
    printf("2. Other\n");
    printf("Enter choice: ");
    scanf("%d", &p.gender);

    printf("\nName: %s\n", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}
