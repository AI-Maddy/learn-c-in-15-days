
#include <stdio.h>

int main() {
    char s[200];
    scanf("%s", s);

    for (int i = 0; s[i]; ) {
        char c = s[i];
        int count = 0;

        while (s[i] == c) {
            count++;
            i++;
        }

        printf("%c%d", c, count);
    }

    return 0;
}

