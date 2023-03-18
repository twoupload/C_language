#include <stdio.h>

int main() {
    char a;
    double b, c;

    scanf("%c", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("%c\n%.2lf\n%.2lf", a, b, c);

    return 0;
}