#include <stdio.h>

int square(int x) { return x * x; }

void apply(int arr[], int n, int (*func)(int)) {
    for (int i = 0; i < n; i++)
        printf("%d ", func(arr[i]));
}

int main() {
    int arr[] = {1, 2, 3, 4};

    apply(arr, 4, square);

    return 0;
}