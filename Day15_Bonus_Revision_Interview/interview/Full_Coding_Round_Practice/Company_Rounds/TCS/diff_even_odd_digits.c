
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int even = 0, odd = 0;

    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) even += d;
        else odd += d;
        n /= 10;
    }

    printf("%d", even - odd);
    return 0;
}

