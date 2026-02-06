#include <stdio.h>

int main() {
    int choice;

    printf("1. Start\n2. Stop\n3. Pause\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Starting...\n");
            break;
        case 2:
            printf("Stopping...\n");
            break;
        case 3:
            printf("Pausing...\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}