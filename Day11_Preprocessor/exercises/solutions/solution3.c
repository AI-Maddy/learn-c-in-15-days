#include <stdio.h>

#define DEBUG
// #define RELEASE

int main() {

#ifdef DEBUG
    printf("Debug mode active\n");
#endif

#ifndef RELEASE
    printf("Release mode NOT active\n");
#endif

    return 0;
}