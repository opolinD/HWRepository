#include<math.h>
#include<locale.h>
#include<stdio.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("������� �: ");
	scanf_s("%d", &a);
	printf("������� b: ");
	scanf_s("%d", &b);
	printf("������� c: ");
	scanf_s("%d", &c);
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		if ((a == b) && (b == c) && (c == a)) {
			printf("��������������\n");
		}else if ((a == b) || (b == c) || (c == a)) {
			printf("��������������\n");
		}else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b)) {
			printf("�������������\n");
		}else {
			printf("������������\n");
		}
	}else {
		printf("�� �������� �������������\n");
	}
	system("pause");
	return 0;
}