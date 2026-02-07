#include <stdio.h>
#include <string.h>

void reverse(char *s, int index) {
    if (index < 0)
        return;
    printf("%c", s[index]);
    reverse(s, index - 1);
}

int main() {
    char str[100];
    scanf("%s", str);

    reverse(str, strlen(str) - 1);
    return 0;
}