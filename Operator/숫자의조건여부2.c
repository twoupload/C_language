#include <stdio.h>

int main() {
	// 변수 선언
	int a;

	// 입력
	scanf("%d", &a);

	// 출력
	if (a == 5)
		printf("A");

	if (a % 2 == 0)
		printf("B");

	return 0;
}