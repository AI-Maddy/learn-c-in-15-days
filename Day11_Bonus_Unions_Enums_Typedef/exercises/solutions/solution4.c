#include <stdio.h>

union Info {
    int id;
    float salary;
};

struct Employee {
    char type;
    union Info data;
};

int main() {
    struct Employee e;

    e.type = 'I';
    e.data.id = 101;

    printf("Size of struct = %lu bytes\n", sizeof(e));

    return 0;
}