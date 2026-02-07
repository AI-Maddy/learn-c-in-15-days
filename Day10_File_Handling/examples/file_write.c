#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "Hello, this is a test file.\n");
    fprintf(fp, "Writing to a file in C.\n");

    fclose(fp);
    printf("Data written successfully.\n");

    return 0;
}