#include <stdio.h>

int main() {
    char a[100], b[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%99s", a);

    printf("Enter second string: ");
    scanf("%49s", b);

    while (a[i] != '\0') i++;

    while ((a[i++] = b[j++]) != '\0');

    printf("Concatenated: %s\n", a);

    return 0;
}