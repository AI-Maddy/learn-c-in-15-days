#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Person {
    char name[20];
    struct Date dob;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &p.dob.day, &p.dob.month, &p.dob.year);

    printf("\nName: %s\nDOB: %02d-%02d-%04d\n",
           p.name, p.dob.day, p.dob.month, p.dob.year);

    return 0;
}