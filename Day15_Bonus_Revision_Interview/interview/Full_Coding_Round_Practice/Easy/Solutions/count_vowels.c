
#include <stdio.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int count = 0;
    for (int i = 0; s[i] != 0; i++) {
        char c = s[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;
    }

    printf("%d", count);
    return 0;
}

