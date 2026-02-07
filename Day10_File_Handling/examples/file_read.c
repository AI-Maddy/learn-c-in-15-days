#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "r");
    char line[100];

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}