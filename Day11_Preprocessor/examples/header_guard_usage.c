#include <stdio.h>
#include "header_guard_demo.h"

void greet() {
    printf("Hello from header file!\n");
}

int main() {
    greet();
    return 0;
}