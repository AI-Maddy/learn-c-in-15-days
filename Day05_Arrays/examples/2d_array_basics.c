#include <stdio.h>

int main() {
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };

    printf("Matrix:\n");
    printf("%d %d\n", matrix[0][0], matrix[0][1]);
    printf("%d %d\n", matrix[1][0], matrix[1][1]);

    return 0;
}