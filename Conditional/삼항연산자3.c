#include <stdio.h>

int main() {
	// 변수 선언
	int a;

	// 입력
	scanf("%d", &a);

	char ans = a == 1 ? 't' : 'f';

	// 출력
	printf("%c", ans);
	return 0;
}