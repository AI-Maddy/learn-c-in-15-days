#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    FILE *fp = fopen("data.bin", "wb");
    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);

    fp = fopen("data.bin", "rb");
    int *readArr = malloc(n * sizeof(int));
    fread(readArr, sizeof(int), n, fp);
    fclose(fp);

    printf("Numbers read from file:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", readArr[i]);

    free(arr);
    free(readArr);

    return 0;
}