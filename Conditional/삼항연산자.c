#include <stdio.h>

int main(void) {
	int a, b, max;
	scanf_s("%d %d", &a, &b);

	max = a > b ? a : b;

	printf("%d", max);
}