#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter roll, name, marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);

    printf("\nRoll: %d\nName: %s\nMarks: %.2f\n",
           s.roll, s.name, s.marks);

    return 0;
}