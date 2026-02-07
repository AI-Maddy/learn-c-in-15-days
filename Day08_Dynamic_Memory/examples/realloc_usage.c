#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(3 * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
        p[i] = i + 1;

    p = realloc(p, 5 * sizeof(int));

    if (p == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    p[3] = 4;
    p[4] = 5;

    printf("Values: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}