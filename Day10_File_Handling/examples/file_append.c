#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "This line was appended.\n");

    fclose(fp);
    printf("Data appended successfully.\n");

    return 0;
}