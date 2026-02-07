#include <stdio.h>
#include <time.h>

int main() {
    FILE *fp = fopen("log.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    time_t now = time(NULL);
    fprintf(fp, "Log entry at: %s", ctime(&now));

    fclose(fp);
    printf("Log entry added.\n");

    return 0;
}