#include <stdio.h>

void increment(int *n) {
    (*n)++;
}

int main() {
    int x = 10;

    increment(&x);

    printf("After increment: %d\n", x);

    return 0;
}