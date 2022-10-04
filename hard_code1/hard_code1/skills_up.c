#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int choise1 = 0, choise2 =0;
	printf("Добро пожаловать!");
	Sleep(500);
	system("cls");
	printf("Загрузка.");
	Sleep(500);
	system("cls");
	printf("Загрузка..");
	Sleep(500);
	system("cls");
	printf("Загрузка...");
	Sleep(500);
	system("cls");
	printf("Загрузка.");
	Sleep(500);
	system("cls");
	printf("Загрузка..");
	Sleep(500);
	system("cls");
	printf("Загрузка...");
	system("cls");
	while (1) {
		printf("Выбор фигуры: \n");
		printf("1. Прямоугольник\n2. Треугольник\n3. Круг\n0. Выйти из приложения\nВвод: ");
		scanf_s("%d", &choise1);
		system("cls");
		switch (choise1) {
		case 1:
			printf("Введите две стороны прямоугольника: ");
			float a, b;
			scanf_s("%f %f", &a, &b);
			while (1) {
				printf("Меню:\n1. Найти площадь прямоугольника.\n2. Найти перимтр треугольника.\n3. Найти диагональ треугольника.\n4. Вернкться к выбору фигуры.\n0. Выйти из приложения.\nВвод: ");
				scanf_s("%d", &choise2);
				if (choise2 == 1) {
					system("cls");
					printf("Площадь прямоугольника: %.2f\n", a * b);
				}
				else if (choise2 == 2) {
					system("cls");
					printf("Периметр равен: %.2f\n", 2 * (a + b));
				}
				else if (choise2 == 3) {
					system("cls");
					printf("Диагналь прямоугольника равна: %.2f\n", sqrt(a * a + b * b));
				}
				else if (choise2 == 4) {
					system("cls");
					break;
				}
				else {
					return(0);
				}
			}
			break;

		case 2:
			printf("Введите две стороны прямоугольного треугольника: ");
			float A, B;
			scanf_s("%f %f", &A, &B);
			while (1) {
				printf("Меню:\n1. Найти площадь треугольника\n2. Найти периметр треугольника.\n3. Найти диагональ треугольника.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод: ");
				scanf_s("%d", &choise2);
				if (choise2 == 1) {
					system("cls");
					printf("Площадь треугольника: %.2f\n", A * B/2);
				}
				else if (choise2 == 2) {
					system("cls");
					printf("Периметр треугольника: %.2f\n", A+B+sqrt(A*A+B*B));
				}
				else if (choise2 == 3) {
					system("cls");
					printf("Гипотенуза треугольника: %.2f\n", sqrt(A * A + B * B));
				}
				else if (choise2 == 4) {
					system("cls");
					break;
				}
				else {
					return(0);
				}
			}
			break;
		case 3:
			printf("Введите радиус круга: ");
			float r;
			scanf_s("%f", &r);
			while (1) {
				printf("Меню:\n1. Найти площадь круга.\n2. Найти длину окружности круга.\n3. Найти диаметр круга.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод: ");
				scanf_s("%d", &choise2);
				if (choise2 == 1) {
					system("cls");
					printf("Площадь круга: %.2f\n", 3.14*r*r);
				}
				else if (choise2 == 2) {
					system("cls");
					printf("Длину окружности круга: %.2f\n", 2*3.14*r);
				}
				else if (choise2 == 3) {
					system("cls");
					printf("Диаметр круга: %.2f\n", 2*r);
				}
				else if (choise2 == 4) {
					system("cls");
					break;
				}
				else {
					return(0);
				}
			}

			break;
		case 0:
			return(0);
		default: break;
		}
	}
}