
---

## **union_basic.c**

```c
#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 3.14;
    printf("Float: %.2f\n", d.f);

    d.c = 'A';
    printf("Char: %c\n", d.c);

    return 0;
}