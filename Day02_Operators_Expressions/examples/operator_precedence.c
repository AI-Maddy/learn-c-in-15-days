#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 2;

    int result1 = a + b * c;       // multiplication first
    int result2 = (a + b) * c;     // parentheses first
    int result3 = a > b && b > c;  // relational before logical AND
    int result4 = a + b > c * 3;   // arithmetic before relational

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    printf("a + b * c       = %d\n", result1);
    printf("(a + b) * c     = %d\n", result2);
    printf("a > b && b > c  = %d\n", result3);
    printf("a + b > c * 3   = %d\n", result4);

    return 0;
}