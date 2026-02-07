#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    int (*fp)(int, int);

    fp = add;
    printf("Add: %d\n", fp(10, 5));

    fp = sub;
    printf("Sub: %d\n", fp(10, 5));

    return 0;
}