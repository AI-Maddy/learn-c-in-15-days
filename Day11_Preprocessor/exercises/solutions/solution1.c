#include <stdio.h>

#define PI 3.14
#define MAX_SIZE 200
#define MESSAGE "Hello from macros!"

int main() {
    printf("PI = %.2f\n", PI);
    printf("MAX_SIZE = %d\n", MAX_SIZE);
    printf("%s\n", MESSAGE);
    return 0;
}