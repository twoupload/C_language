#include <stdio.h>

int main() {
	// ���� ����
	int n;

	// �Է�
	scanf("%d", &n);

	// ���
	if (n >= 3000)
		printf("book");
	else if (n >= 1000)
		printf("mask");
	else
		printf("no");
	return 0;
}