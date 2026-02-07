#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light s = GREEN;

    switch (s) {
        case RED: printf("STOP\n"); break;
        case YELLOW: printf("WAIT\n"); break;
        case GREEN: printf("GO\n"); break;
    }

    return 0;
}