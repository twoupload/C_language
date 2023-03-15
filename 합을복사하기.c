#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d;
    d = a + b + c;

    a = b = c = d;

    printf("%d %d %d", a, b, c);
    return 0;
}