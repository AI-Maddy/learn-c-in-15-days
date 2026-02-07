#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(4 * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 4; i++)
        p[i] = i * 2;

    free(p);
    p = NULL;  // safe practice

    printf("Memory freed safely\n");

    return 0;
}