
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    k %= n;

    for (int i = 0; i < n; i++)
        printf("%d ", a[(i + k) % n]);

    return 0;
}

