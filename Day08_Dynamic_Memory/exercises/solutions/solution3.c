#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    printf("Values after calloc: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}