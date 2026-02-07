#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light signal = YELLOW;

    switch (signal) {
        case RED: printf("STOP\n"); break;
        case YELLOW: printf("READY\n"); break;
        case GREEN: printf("GO\n"); break;
    }

    return 0;
}