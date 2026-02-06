#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("Initial values: a = %d, b = %d\n", a, b);

    a += 3;   // a = a + 3
    b -= 2;   // b = b - 2
    a *= 2;   // a = a * 2
    b /= 3;   // b = b / 3

    printf("After operations:\n");
    printf("a += 3 → %d\n", a);
    printf("b -= 2 → %d\n", b);
    printf("a *= 2 → %d\n", a);
    printf("b /= 3 → %d\n", b);

    return 0;
}