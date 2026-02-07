#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.bin", "wb");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int nums[5] = {10, 20, 30, 40, 50};
    fwrite(nums, sizeof(int), 5, fp);
    fclose(fp);

    fp = fopen("numbers.bin", "rb");
    int readNums[5];

    fread(readNums, sizeof(int), 5, fp);
    fclose(fp);

    printf("Numbers read from binary file:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", readNums[i]);

    return 0;
}