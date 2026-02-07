
#include <stdio.h>

void printLine(int n) {
    if (n == 0) return;
    printLine(n - 1);
    printf("%d ", n);
}

void solve(int n, int cur) {
    if (cur > n) return;
    printLine(cur);
    printf("\n");
    solve(n, cur + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    solve(n, 1);
    return 0;
}

