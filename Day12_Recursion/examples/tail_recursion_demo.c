#include <stdio.h>

int tailSum(int n, int acc) {
    if (n == 0)
        return acc;
    return tailSum(n - 1, acc + n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d\n", tailSum(n, 0));
    return 0;
}