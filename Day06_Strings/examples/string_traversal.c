#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Characters:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

    return 0;
}