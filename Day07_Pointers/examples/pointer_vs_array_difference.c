#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int *p = arr;

    printf("sizeof(arr) = %lu\n", sizeof(arr)); // 12 bytes
    printf("sizeof(p) = %lu\n", sizeof(p));     // 8 bytes (pointer size)

    p = p + 1;  // allowed
    // arr = arr + 1; // NOT allowed

    return 0;
}