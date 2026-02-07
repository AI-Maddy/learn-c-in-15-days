#include <stdio.h>

int main() {
    int n, arr[100];
    int *p;
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    p = arr;

    for (int i = 0; i < n; i++) {
        if (*(p + i) % 2 == 0)
            count++;
    }

    printf("Even numbers = %d\n", count);

    return 0;
}