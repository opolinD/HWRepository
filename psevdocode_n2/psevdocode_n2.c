#include<stdio.h>
#include<locale.h>
#include<math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int x, y, z;
	printf("������� �: ");
	scanf_s("%d", &x);
	printf("������� y: ");
	scanf_s("%d", &y);
	printf("������� z: ");
	scanf_s("%d", &z);
	if ((x != y) && (x != z) && (y != z)) {
		if ((x < z) && (x < y)) {
			z += x;
		}else if ((y < x) && (y < z)) {
			z += y;
		}else {
			z *= z;
		}
	}else {
		if (x == y && x == z && y == z) {
			printf("��� ���������� �����\n");
		}else {
			if (x == y) {
				printf("x = y\n");
			}else if (x == z) {
				printf("x = z\n");
			}else {
				printf("y = z\n");
			}
		}
	}
	system("pause");
	return 0;
}