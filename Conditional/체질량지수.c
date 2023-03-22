#include <stdio.h>

int main() {
    double a, b, per;

    scanf("%lf %lf", &a, &b);

    a /= 100;

    per = b / (a * a);

    if (per >= 25)
    {
        printf("%d\n", (int)per);
        printf("Obesity");
    }

    else printf("%d", (int)per);

    return 0;
}