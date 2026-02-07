#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} Student;

int main() {
    Student s = {"Bob", 19};
    printf("%s %d\n", s.name, s.age);
    return 0;
}