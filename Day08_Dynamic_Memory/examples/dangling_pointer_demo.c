#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    *p = 42;

    printf("Value = %d\n", *p);

    free(p);
    p = NULL;  // prevents dangling pointer

    printf("Pointer safely set to NULL\n");

    return 0;
}