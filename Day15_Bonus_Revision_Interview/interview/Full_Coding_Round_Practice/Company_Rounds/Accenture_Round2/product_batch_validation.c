
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n], freq[10001] = {0};
    int min = 100000, max = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;

        if (freq[a[i]] > 2) {
            printf("Invalid");
            return 0;
        }

        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }

    if (max - min <= k) printf("Valid");
    else printf("Invalid");

    return 0;
}

