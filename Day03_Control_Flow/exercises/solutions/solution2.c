#include <stdio.h>

int main() {
    int choice, a, b;

    while (1) {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter a: ");
        scanf("%d", &a);
        printf("Enter b: ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Result = %d\n", a + b);
                break;
            case 2:
                printf("Result = %d\n", a - b);
                break;
            case 3:
                printf("Result = %d\n", a * b);
                break;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}