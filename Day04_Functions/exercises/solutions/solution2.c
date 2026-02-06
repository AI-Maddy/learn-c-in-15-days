#include <stdio.h>

int factorial(int n) {
    if (n < 0)
        return -1;  // error code
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);

    if (result == -1) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial = %d\n", result);
    }

    return 0;
}