#include <iostream>

using namespace std;

void PrintString(int n) { // 1���� n��° �ٱ��� ���ڿ��� ����ϴ� �Լ�
    if (n == 0)            // n�� 0�̶��, �� �̻� �������� �ʰ�
        return;           // ���մϴ�.

    PrintString(n - 1);   // 1���� n - 1��° �ٱ��� ����ϴ� �Լ�
    cout << "HelloWorld" << endl;
}

int main() {
    // ���� ���� �� �Է�:
    int n;
    cin >> n;

    PrintString(n);
    return 0;
}