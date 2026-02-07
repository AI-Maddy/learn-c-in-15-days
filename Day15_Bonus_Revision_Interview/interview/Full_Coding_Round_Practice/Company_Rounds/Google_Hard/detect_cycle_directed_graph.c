
#include <stdio.h>

int g[100][100], visited[100], stack[100], n;

int dfs(int v) {
    visited[v] = 1;
    stack[v] = 1;

    for (int i = 0; i < n; i++) {
        if (g[v][i]) {
            if (!visited[i] && dfs(i)) return 1;
            else if (stack[i]) return 1;
        }
    }

    stack[v] = 0;
    return 0;
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &g[i][j]);

    for (int i = 0; i < n; i++)
        if (!visited[i] && dfs(i)) {
            printf("Cycle Detected");
            return 0;
        }

    printf("No Cycle");
    return 0;
}

