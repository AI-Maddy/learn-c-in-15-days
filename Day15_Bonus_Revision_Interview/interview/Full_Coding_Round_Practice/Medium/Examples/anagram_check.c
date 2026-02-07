
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("No");
        return 0;
    }

    int freq[256] = {0};

    for (int i = 0; a[i]; i++) freq[(unsigned char)a[i]]++;
    for (int i = 0; b[i]; i++) freq[(unsigned char)b[i]]--;

    for (int i = 0; i < 256; i++)
        if (freq[i] != 0) {
            printf("No");
            return 0;
        }

    printf("Yes");
    return 0;
}

