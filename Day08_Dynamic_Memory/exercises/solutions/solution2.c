#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("Enter initial size: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter new size: ");
    scanf("%d", &m);

    arr = realloc(arr, m * sizeof(int));

    if (arr == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    for (int i = n; i < m; i++)
        arr[i] = 0;

    printf("Updated array: ");
    for (int i = 0; i < m; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}