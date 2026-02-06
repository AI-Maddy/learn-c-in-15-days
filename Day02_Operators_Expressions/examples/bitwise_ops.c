#include <stdio.h>

int main() {
    int a = 6;   // 110 in binary
    int b = 3;   // 011 in binary

    printf("a = %d, b = %d\n", a, b);

    printf("a & b = %d\n", a & b);   // AND → 010 → 2
    printf("a | b = %d\n", a | b);   // OR  → 111 → 7
    printf("a ^ b = %d\n", a ^ b);   // XOR → 101 → 5

    printf("a << 1 = %d\n", a << 1); // left shift → 1100 → 12
    printf("a >> 1 = %d\n", a >> 1); // right shift → 011 → 3

    return 0;
}