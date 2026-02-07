
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], c0=0, c1=0, c2=0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i]==0) c0++;
        else if (a[i]==1) c1++;
        else c2++;
    }

    for (int i = 0; i < c0; i++) printf("0 ");
    for (int i = 0; i < c1; i++) printf("1 ");
    for (int i = 0; i < c2; i++) printf("2 ");

    return 0;
}

