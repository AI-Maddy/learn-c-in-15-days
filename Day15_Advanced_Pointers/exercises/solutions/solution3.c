#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    int (*op)(int, int);
    int a, b;
    char ch;

    scanf("%d %d %c", &a, &b, &ch);

    switch (ch) {
        case '+': op = add; break;
        case '-': op = sub; break;
        case '*': op = mul; break;
        case '/': op = divide; break;
        default: return 0;
    }

    printf("%d\n", op(a, b));
    return 0;
}