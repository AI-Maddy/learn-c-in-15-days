#include <stdio.h>

int main() {
    int flags;

    printf("Enter initial flag value: ");
    scanf("%d", &flags);

    // Set bit 2 (OR with 4)
    flags = flags | (1 << 2);
    printf("After setting bit 2: %d\n", flags);

    // Clear bit 1 (AND with NOT 2)
    flags = flags & ~(1 << 1);
    printf("After clearing bit 1: %d\n", flags);

    // Toggle bit 0 (XOR with 1)
    flags = flags ^ (1 << 0);
    printf("After toggling bit 0: %d\n", flags);

    return 0;
}