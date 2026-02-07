#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));

    if (p == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    *p = 99;
    printf("Value = %d\n", *p);

    free(p);
    p = NULL;

    if (p == NULL)
        printf("Pointer safely set to NULL\n");

    return 0;
}