
#include <stdio.h>

int bs(int a[], int l, int r, int x) {
    if (l > r) return -1;

    int mid = (l + r) / 2;

    if (a[mid] == x) return mid;
    if (x < a[mid]) return bs(a, l, mid - 1, x);
    return bs(a, mid + 1, r, x);
}

int main() {
    int n, x;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &x);

    printf("%d", bs(a, 0, n - 1, x));
    return 0;
}

