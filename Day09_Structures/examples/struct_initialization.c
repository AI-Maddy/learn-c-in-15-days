#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee e1 = {101, "Arun", 55000.0};
    struct Employee e2 = {.salary = 60000.0, .id = 102};
    strcpy(e2.name, "Kumar");

    printf("Employee 1: %d %s %.2f\n", e1.id, e1.name, e1.salary);
    printf("Employee 2: %d %s %.2f\n", e2.id, e2.name, e2.salary);

    return 0;
}