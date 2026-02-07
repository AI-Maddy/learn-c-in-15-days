
#include <stdio.h>
#include <string.h>

void reverseWords(char *s, int i) {
    if (s[i] == '\0') return;

    int start = i;
    while (s[i] != ' ' && s[i] != '\0') i++;

    reverseWords(s, i + 1);

    for (int j = start; j < i; j++)
        printf("%c", s[j]);

    if (start != 0) printf(" ");
}

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    reverseWords(s, 0);
    return 0;
}

