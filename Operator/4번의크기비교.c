#include <stdio.h>

int main() {
    // 변수 선언
    int a, b, c, d, e;

    // 입력
    scanf("%d", &a);
    scanf("%d %d %d %d", &b, &c, &d, &e);

    // 출력
    printf("%d\n%d\n%d\n%d", (a > b), (a > c), (a > d), (a > e));

    return 0;
}