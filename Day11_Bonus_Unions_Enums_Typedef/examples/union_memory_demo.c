#include <stdio.h>

union Test {
    int i;
    double d;
    char c;
};

int main() {
    union Test t;

    printf("Size of union = %lu bytes\n", sizeof(t));
    return 0;
}