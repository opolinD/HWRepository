#include<stdio.h>
#include<locale.h>
#include<math.h>
int main() {
	setlocale(LC_ALL, "russian");
	float x1, x2, y1, y2, x3, y3, a, b, c, hp;
	printf("Введите x1:");
	scanf_s("%f", &x1);
	printf("Введите y1:");
	scanf_s("%f", &y1);
	printf("Введите x2:");
	scanf_s("%f", &x2);
	printf("Введите y2:");
	scanf_s("%f", &y2);
	printf("Введите x3:");
	scanf_s("%f", &x3);
	printf("Введите y3:");
	scanf_s("%f", &y3);

	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	hp = (a + b + c) / 2;
	printf("Периметр = %.1f\n", a + b + c);
	printf("Площадь = %.1f", sqrt(hp * (hp - a) * (hp - b) * (hp - c)));
	system("pause");
	return 0;
}