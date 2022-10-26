#include<math.h>
#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	printf("Введите а: ");
	scanf_s("%d", &a);
	printf("Введите b: ");
	scanf_s("%d", &b);
	printf("Сумма чисел %d\n", a + b);
	printf("Разница чисел %d\n", a - b);
	printf("Произведение чисел %d\n", a * b);
	printf("Частное чисел %.2f\n", (float)a / b);
	printf("Среднее арифметическое квадратов %.2f\n", (a * a + b * b) * 1.0 / 2);
	printf("Среднее арифметическое модулей %.2f\n", 1.0 * (abs(a) + abs(b)) / 2);
	printf("Оствток от деления %d\n", a % b);
	system("pause");
	return 0;
}