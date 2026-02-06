#include <stdio.h>

int add(int, int);  // function prototype

int main() {
    int result = add(10, 20);
    printf("Addition = %d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}