#include <stdio.h>

int main() {
    char s1[50], s2[50];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    scanf("%49s", s1);

    printf("Enter second string: ");
    scanf("%49s", s2);

    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are NOT equal\n");

    return 0;
}