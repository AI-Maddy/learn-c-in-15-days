
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d %d", &n, &target);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == target)
                printf("%d %d\n", a[i], a[j]);

    return 0;
}

