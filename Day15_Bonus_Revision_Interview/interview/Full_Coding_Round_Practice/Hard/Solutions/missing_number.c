
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;
    int x;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        sum -= x;
    }

    printf("%d", sum);
    return 0;
}

