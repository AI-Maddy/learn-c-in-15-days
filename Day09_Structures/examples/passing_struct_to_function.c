#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

void display(struct Student s) {
    printf("Roll: %d, Marks: %.2f\n", s.roll, s.marks);
}

int main() {
    struct Student s1 = {5, 92.5};
    display(s1);
    return 0;
}