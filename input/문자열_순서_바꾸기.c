#include <stdio.h>

int main() {
    char a[100];
    char b[100];

    scanf("%s %s", &a, &b);

    printf("%s\n%s", b, a);
    return 0;
}