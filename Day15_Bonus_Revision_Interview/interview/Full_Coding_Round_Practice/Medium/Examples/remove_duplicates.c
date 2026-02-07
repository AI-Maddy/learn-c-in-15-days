
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], k = 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < k; j++)
            if (a[j] == a[i]) found = 1;
        if (!found) a[k++] = a[i];
    }

    for (int i = 0; i < k; i++) printf("%d ", a[i]);
    return 0;
}

