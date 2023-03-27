#include <stdio.h>

int main() {
	// 변수 선언
	int a, b;

	// 입력
	scanf("%d %d", &a, &b);

	// 출력
	if (a % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	if (b % 2 == 0)
		printf("even");
	else
		printf("odd");

	return 0;
}