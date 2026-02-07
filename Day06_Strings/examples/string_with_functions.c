#include <stdio.h>

void printString(char s[]) {
    printf("String: %s\n", s);
}

int main() {
    char text[50];

    printf("Enter a string: ");
    scanf("%49s", text);

    printString(text);

    return 0;
}