#include <stdio.h>

#define VERSION 2
#define DEBUG

int main() {

#ifdef DEBUG
    printf("Debug mode enabled\n");
#endif

#if VERSION == 1
    printf("Version 1 selected\n");
#elif VERSION == 2
    printf("Version 2 selected\n");
#else
    printf("Unknown version\n");
#endif

    return 0;
}