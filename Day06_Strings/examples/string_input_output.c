#include <stdio.h>

int main() {
    char str[50];

    printf("Enter a word: ");
    scanf("%49s", str);   // safe input

    printf("You entered: %s\n", str);

    return 0;
}