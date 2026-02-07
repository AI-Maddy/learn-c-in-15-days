#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for (int i = 0; i < n; i++) {
        printf("Enter id, name, salary: ");
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }

    printf("\nEmployee Records:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}