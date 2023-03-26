#include <stdio.h>

int main() {
	// 변수 선언
	int temp;

	// 입력
	scanf("%d", &temp);

	// 출력
	if (temp < 0)
		printf("ice");
	else if (temp >= 100)
		printf("vapor");
	else
		printf("water");
	return 0;
}