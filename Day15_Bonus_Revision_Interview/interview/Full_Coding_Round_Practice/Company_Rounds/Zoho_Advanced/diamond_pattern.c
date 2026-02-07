
#include <stdio.h>

void printSpaces(int n) {
    while (n--) printf(" ");
}

void printStars(int n) {
    while (n--) printf("*");
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printSpaces(n - i);
        printStars(2*i - 1);
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        printSpaces(n - i);
        printStars(2*i - 1);
        printf("\n");
    }

    return 0;
}

