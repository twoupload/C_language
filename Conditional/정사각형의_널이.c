#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n < 5)
    {
        printf("%d\n", n * n);
        printf("tiny");
    }

    else printf("%d", n * n);

    return 0;
}