#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    int words = 0;
    char c, prev = ' ';

    while ((c = fgetc(fp)) != EOF) {
        if (!isspace(c) && isspace(prev))
            words++;
        prev = c;
    }

    fclose(fp);
    printf("Word count = %d\n", words);

    return 0;
}