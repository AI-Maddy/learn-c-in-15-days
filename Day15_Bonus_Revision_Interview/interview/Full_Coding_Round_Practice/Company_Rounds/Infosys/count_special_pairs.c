
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], freq[3] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i] % 3]++;
    }

    int count = 0;
    count += freq[0] * (freq[0] - 1) / 2;
    count += freq[1] * freq[2];

    printf("%d", count);
    return 0;
}

