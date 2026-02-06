#include <stdio.h>

int globalVar = 100;

void demo() {
    static int count = 0;  // retains value between calls
    int localVar = 10;     // recreated each call

    count++;
    printf("Static count = %d, Local var = %d, Global = %d\n",
           count, localVar, globalVar);
}

int main() {
    demo();
    demo();
    demo();
    return 0;
}