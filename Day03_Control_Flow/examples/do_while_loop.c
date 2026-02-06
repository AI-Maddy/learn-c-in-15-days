#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);
        printf("You entered: %d\n", num);
    } while (num != 0);

    return 0;
}