#include <stdio.h>

int main() {
	// 변수 선언
	int n;

	// 입력
	scanf("%d", &n);

	// 출력
	if (n == 1)
		printf("John");
	else if (n == 2)
		printf("Tom");
	else if (n == 3)
		printf("Paul");
	else
		printf("Vacancy");
	return 0;
}