#include<math.h>
#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	printf("������� �: ");
	scanf_s("%d", &a);
	printf("������� b: ");
	scanf_s("%d", &b);
	printf("����� ����� %d\n", a + b);
	printf("������� ����� %d\n", a - b);
	printf("������������ ����� %d\n", a * b);
	printf("������� ����� %.2f\n", (float)a / b);
	printf("������� �������������� ��������� %.2f\n", (a * a + b * b) * 1.0 / 2);
	printf("������� �������������� ������� %.2f\n", 1.0 * (abs(a) + abs(b)) / 2);
	printf("������� �� ������� %d\n", a % b);
	system("pause");
	return 0;
}