#include <stdio.h>

int main() {
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = b;
    b = a;
    a = temp;

    printf("%d %d", a, b);
    return 0;
}