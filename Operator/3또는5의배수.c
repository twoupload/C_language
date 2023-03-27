#include <stdio.h>

int main() {
	// 변수 선언
	int a;

	// 입력
	scanf("%d", &a);

	// 출력
	if (a % 3 == 0)
		printf("YES\n");
	else
		printf("NO\n");

	if (a % 5 == 0)
		printf("YES");
	else
		printf("NO");

	return 0;
}