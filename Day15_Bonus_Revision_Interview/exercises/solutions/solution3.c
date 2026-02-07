#include <stdio.h>

int mystrlen(char *s) {
    int c = 0;
    while (s[c] != '\0') c++;
    return c;
}

int main() {
    printf("%d\n", mystrlen("hello"));
    return 0;
}