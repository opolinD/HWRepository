#include<math.h>
#include<locale.h>
#include<stdio.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("Введите а: ");
	scanf_s("%d", &a);
	printf("Введите b: ");
	scanf_s("%d", &b);
	printf("Введите c: ");
	scanf_s("%d", &c);
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		if ((a == b) && (b == c) && (c == a)) {
			printf("равносторонний\n");
		}else if ((a == b) || (b == c) || (c == a)) {
			printf("равнобедренный\n");
		}else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b)) {
			printf("прямоугольный\n");
		}else {
			printf("произвольный\n");
		}
	}else {
		printf("Не является треугольником\n");
	}
	system("pause");
	return 0;
}