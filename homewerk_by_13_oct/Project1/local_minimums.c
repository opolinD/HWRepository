#include<stdio.h>
#include<locale.h>
#include<malloc.h>

int main() {
	setlocale(LC_ALL, "rus");
	int* mass;
	int n, min_counter = 0;
	printf("������� ������ �������: ");
	scanf_s("%d", &n);
	mass = (int*)malloc(sizeof(int) * n);
	printf("������� ������:\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &mass[i]);
	}
	for (int i = 1; i < n-1; i++) {
		if (mass[i] < mass[i - 1] && mass[i] < mass[i + 1]) {
			min_counter++;
		}
	}
	printf("��������: %d\n", min_counter);
	free(mass);
	system("pause");
	return 0;
}