#include <stdio.h>

int main() {
	// 변수 선언
	int n;

	// 입력
	scanf("%d", &n);

	// 출력
	if (n >= 3000)
		printf("book");
	else if (n >= 1000)
		printf("mask");
	else
		printf("no");
	return 0;
}