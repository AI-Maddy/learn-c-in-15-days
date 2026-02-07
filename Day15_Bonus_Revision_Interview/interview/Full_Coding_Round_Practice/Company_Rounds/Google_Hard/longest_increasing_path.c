
#include <stdio.h>

int R, C;
int a[200][200], dp[200][200];

int max(int a, int b) { return a > b ? a : b; }

int dfs(int r, int c) {
    if (dp[r][c] != -1) return dp[r][c];

    int best = 1;

    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, 1, -1};

    for (int k = 0; k < 4; k++) {
        int nr = r + dr[k], nc = c + dc[k];
        if (nr >= 0 && nr < R && nc >= 0 && nc < C && a[nr][nc] > a[r][c])
            best = max(best, 1 + dfs(nr, nc));
    }

    return dp[r][c] = best;
}

int main() {
    scanf("%d %d", &R, &C);

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
            dp[i][j] = -1;
        }

    int ans = 0;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            ans = max(ans, dfs(i, j));

    printf("%d", ans);
    return 0;
}

