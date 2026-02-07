#include <stdio.h>
#include "myheader.h"

void showMessage() {
    printf("%s\n", GREETING);
}

int main() {
    showMessage();
    return 0;
}