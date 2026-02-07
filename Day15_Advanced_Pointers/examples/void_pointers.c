#include <stdio.h>

int main() {
    int x = 10;
    float y = 5.5;

    void *ptr;

    ptr = &x;
    printf("Integer: %d\n", *(int *)ptr);

    ptr = &y;
    printf("Float: %.2f\n", *(float *)ptr);

    return 0;
}