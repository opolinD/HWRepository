#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, volume, square_of_cube, square_of_sides;
	printf("������� ������� �: ");
	scanf_s("%d", &a);
	volume = pow(a, 3);
	square_of_cube = 6 * a * a;
	square_of_sides = 4 * a * a;
	printf(" ����� ���� ����� %d\n", volume);
	printf(" ������� ������ ����������� ����� %d\n", square_of_cube);
	printf(" ������� ������� ����������� ����� %d\n", square_of_sides);
	system("pause");
	return 0;
}