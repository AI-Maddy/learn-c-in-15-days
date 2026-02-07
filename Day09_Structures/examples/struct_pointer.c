#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {10, 88.5};
    struct Student *p = &s1;

    printf("Roll: %d\n", p->roll);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}