#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);

    **pp = 50; // modify x through double pointer

    printf("After modification, x = %d\n", x);

    return 0;
}