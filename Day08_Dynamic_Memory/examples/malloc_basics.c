#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*) malloc(5 * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
        p[i] = (i + 1) * 10;

    printf("Values: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}