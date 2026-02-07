#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main() {
    int a = 5, b = 8;

    printf("Square of %d = %d\n", a, SQUARE(a));
    printf("Max of %d and %d = %d\n", a, b, MAX(a, b));

    return 0;
}