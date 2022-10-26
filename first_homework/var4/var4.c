#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, volume, square_of_cube, square_of_sides;
	printf("Введите сторону а: ");
	scanf_s("%d", &a);
	volume = pow(a, 3);
	square_of_cube = 6 * a * a;
	square_of_sides = 4 * a * a;
	printf(" Объем куба равен %d\n", volume);
	printf(" Площадь полной поверхности равна %d\n", square_of_cube);
	printf(" Площадь боковой поверхности равна %d\n", square_of_sides);
	system("pause");
	return 0;
}