#include <stdio.h>

int main() {
    int a = 10, b = 20;

    int max = (a > b) ? a : b;

    printf("a = %d, b = %d\n", a, b);
    printf("Max value = %d\n", max);

    int num = -5;
    char *type = (num >= 0) ? "Positive" : "Negative";

    printf("%d is %s\n", num, type);

    return 0;
}