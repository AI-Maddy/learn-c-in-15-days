#include <stdio.h>

int main() {
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score\n");
        return 0;
    }

    if (score >= 50) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}