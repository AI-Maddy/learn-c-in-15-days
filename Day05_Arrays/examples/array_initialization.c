#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20};   // remaining become 0
    int c[] = {7, 8, 9};   // size auto-detected

    printf("Array a: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\nArray b: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", b[i]);

    printf("\nArray c: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", c[i]);

    return 0;
}