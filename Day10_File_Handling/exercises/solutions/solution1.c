#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "This is a sample text file.\n");
    fclose(fp);

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), fp))
        printf("%s", line);

    fclose(fp);
    return 0;
}