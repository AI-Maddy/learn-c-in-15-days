
#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], dp[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    dp[0][0] = a[0][0];

    for (int i = 1; i < r; i++)
        dp[i][0] = dp[i-1][0] + a[i][0];

    for (int j = 1; j < c; j++)
        dp[0][j] = dp[0][j-1] + a[0][j];

    for (int i = 1; i < r; i++)
        for (int j = 1; j < c; j++)
            dp[i][j] = a[i][j] + min(dp[i-1][j], dp[i][j-1]);

    printf("%d", dp[r-1][c-1]);
    return 0;
}

