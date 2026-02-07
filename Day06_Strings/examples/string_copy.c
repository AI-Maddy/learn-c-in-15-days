#include <stdio.h>

int main() {
    char src[50], dest[50];
    int i = 0;

    printf("Enter a string: ");
    scanf("%49s", src);

    while ((dest[i] = src[i]) != '\0')
        i++;

    printf("Copied string: %s\n", dest);

    return 0;
}