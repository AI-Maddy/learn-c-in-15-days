#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int result = multiply(4, 6);
    printf("Result = %d\n", result);
    return 0;
}