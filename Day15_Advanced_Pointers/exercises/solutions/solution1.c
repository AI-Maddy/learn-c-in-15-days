#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;
    int **pp = &p;

    **pp = 25;

    printf("x = %d\n", x);
    return 0;
}