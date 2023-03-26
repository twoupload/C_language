#include <stdio.h>

int main() {
	// 변수 선언
	double a;

	// 입력
	scanf("%lf", &a);

	// 출력
	if (a >= 1.0)
		printf("High");
	else if (a >= 0.5)
		printf("Middle");
	else
		printf("Low");
	return 0;
}