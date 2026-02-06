#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {

        if (i == 5) {
            continue;   // skip 5
        }

        if (i == 8) {
            break;      // stop at 8
        }

        printf("%d\n", i);
    }

    return 0;
}