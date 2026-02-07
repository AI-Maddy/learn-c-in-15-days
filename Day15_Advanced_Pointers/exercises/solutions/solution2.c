#include <stdio.h>

int main() {
    const char *words[] = {"Hello", "World", "Pointers"};

    for (int i = 0; i < 3; i++)
        printf("%s\n", words[i]);

    return 0;
}