#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("%d\n", *p);
    printf("%p\n", p);

    return 0;
}