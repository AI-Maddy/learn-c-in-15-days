#include <stdio.h>

int main() {
    int x = 5;

    printf("Initial x = %d\n", x);

    printf("Post-increment x++ = %d\n", x++);  // prints 5, then x becomes 6
    printf("After post-increment x = %d\n", x);

    printf("Pre-increment ++x = %d\n", ++x);  // x becomes 7, then prints 7

    printf("Post-decrement x-- = %d\n", x--); // prints 7, then x becomes 6
    printf("After post-decrement x = %d\n", x);

    printf("Pre-decrement --x = %d\n", --x);  // x becomes 5, then prints 5

    return 0;
}