#include <stdio.h>

int strLength(char *s) {
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Length = %d\n", strLength(str));

    return 0;
}