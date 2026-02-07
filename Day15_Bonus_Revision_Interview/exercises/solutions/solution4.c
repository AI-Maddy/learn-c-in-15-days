#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    int max1 = -1, max2 = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("Second largest = %d\n", max2);
    return 0;
}