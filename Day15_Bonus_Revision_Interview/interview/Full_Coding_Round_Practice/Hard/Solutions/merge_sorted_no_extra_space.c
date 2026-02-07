
#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int i = n - 1, j = 0;

    while (i >= 0 && j < m) {
        if (a[i] > b[j]) {
            swap(&a[i], &b[j]);
            i--; j++;
        } else break;
    }

    for (int x = 0; x < n - 1; x++)
        for (int y = x + 1; y < n; y++)
            if (a[x] > a[y]) swap(&a[x], &a[y]);

    for (int x = 0; x < m - 1; x++)
        for (int y = x + 1; y < m; y++)
            if (b[x] > b[y]) swap(&b[x], &b[y]);

    for (int x = 0; x < n; x++) printf("%d ", a[x]);
    for (int x = 0; x < m; x++) printf("%d ", b[x]);

    return 0;
}

