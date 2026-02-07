
#include <stdio.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int freq[256] = {0};

    for (int i = 0; s[i]; i++)
        freq[(unsigned char)s[i]]++;

    for (int i = 0; i < 256; i++)
        if (freq[i] > 0)
            printf("%c : %d\n", i, freq[i]);

    return 0;
}

