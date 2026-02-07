#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*) calloc(5, sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Values after calloc (should be 0): ");
    for (int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    free(p);
    return 0;
}