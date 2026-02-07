#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w+");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "12345\n");
    fprintf(fp, "ABCDE\n");

    rewind(fp);

    char buffer[50];
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}