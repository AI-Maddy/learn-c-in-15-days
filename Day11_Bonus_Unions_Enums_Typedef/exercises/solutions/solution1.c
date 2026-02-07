#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 42;
    printf("%d\n", d.i);

    d.f = 2.5;
    printf("%.2f\n", d.f);

    d.c = 'Z';
    printf("%c\n", d.c);

    return 0;
}