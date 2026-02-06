#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        if (age >= 60) {
            printf("Senior citizen.\n");
        } else {
            printf("Adult.\n");
        }
    } else {
        if (age >= 13) {
            printf("Teenager.\n");
        } else {
            printf("Child.\n");
        }
    }

    return 0;
}