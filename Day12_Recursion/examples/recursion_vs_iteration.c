#include <stdio.h>

int sumRecursive(int n) {
    if (n == 0) return 0;
    return n + sumRecursive(n - 1);
}

int sumIterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {
    int n = 10;

    printf("Recursive sum = %d\n", sumRecursive(n));
    printf("Iterative sum = %d\n", sumIterative(n));

    return 0;
}