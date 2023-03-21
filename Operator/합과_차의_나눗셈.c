#include <stdio.h>

int main() {
    int a, b, pl, mi;

    scanf("%d %d", &a, &b);

    pl = a + b;
    mi = a - b;

    printf("%.2lf", (double)pl / mi);

    return 0;
}