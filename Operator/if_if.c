#include <stdio.h>

int main() {
    // ���� ���� �� �Է�
    int a;
    scanf("%d", &a);

    if (a % 2 == 0)
        a /= 2;

    if (a % 2 == 1)
        a = (a + 1) / 2;

    printf("%d", a);
    return 0;
}