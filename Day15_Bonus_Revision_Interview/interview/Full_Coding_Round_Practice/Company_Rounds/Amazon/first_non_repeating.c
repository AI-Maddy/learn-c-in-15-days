
#include <stdio.h>

int main() {
    char s[200];
    scanf("%s", s);

    int freq[256] = {0};
    for (int i = 0; s[i]; i++)
        freq[(unsigned char)s[i]]++;

    for (int i = 0; s[i]; i++)
        if (freq[(unsigned char)s[i]] == 1) {
            printf("%c", s[i]);
            return 0;
        }

    printf("-1");
    return 0;
}

