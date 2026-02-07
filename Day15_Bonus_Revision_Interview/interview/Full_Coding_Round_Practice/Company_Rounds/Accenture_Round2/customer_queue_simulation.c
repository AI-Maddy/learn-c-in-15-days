
#include <stdio.h>

int main() {
    char s[200];
    scanf("%s", s);

    int count = 0;

    for (int i = 0; s[i]; i++) {
        if (s[i] == 'A') count++;
        else if (s[i] == 'S' && count > 0) count--;
    }

    printf("%d", count);
    return 0;
}

