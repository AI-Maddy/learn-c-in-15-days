#include <stdio.h>

int square(int x) { return x * x; }
int cube(int x) { return x * x * x; }

void apply(int arr[], int n, int (*func)(int)) {
    for (int i = 0; i < n; i++)
        printf("%d ", func(arr[i]));
}

int main() {
    int arr[] = {1, 2, 3, 4};

    printf("Squares: ");
    apply(arr, 4, square);

    printf("\nCubes: ");
    apply(arr, 4, cube);

    return 0;
}