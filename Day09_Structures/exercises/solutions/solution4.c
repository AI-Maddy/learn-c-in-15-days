#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

void updateSalary(struct Employee *e, float increment) {
    e->salary += increment;
}

int main() {
    struct Employee e = {101, "Arun", 50000};

    updateSalary(&e, 5000);

    printf("Updated Salary: %.2f\n", e.salary);

    return 0;
}