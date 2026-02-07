
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], freq[10000]={0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }

    for (int i = 0; i < n; i++)
        if (freq[a[i]] == 1)
            printf("%d ", a[i]);

    return 0;
}

