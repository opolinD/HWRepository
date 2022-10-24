#include<stdio.h>
#include<malloc.h>
#include<locale.h>

int search_of_maximums(int* mass, int n) {
	int* mass_of_max;
	int cnt = 0;
	mass_of_max = (int*)malloc(sizeof(int) * n);
	for (int i = 1; i < n; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			mass_of_max[cnt] = mass[i];
			cnt++;
		}
	}
	printf("Массив максимумов [ ");
	for (int i = 0; i < cnt; i++) {
		printf("%d ", mass_of_max[i]);
	}
	printf("]\n");
	return mass_of_max;
}
int maximums_counter(int* mass, int n) {
	int max_counter = 0;
	for (int i = 1; i < n; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			max_counter++;
		}
	}
	printf("Всего локальных максимумов: %d\n", max_counter);
	return max_counter;
}

int search_of_minimal_max(int*mass, int n) {
	int* mass_of_max;
	int cnt = 0;
	mass_of_max = (int*)malloc(sizeof(int) * n);
	for (int i = 1; i < n; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			mass_of_max[cnt] = mass[i];
			cnt++;
		}
	}
	
	int min_of_max = mass_of_max[0];
	for (int i = 0; i < cnt; i++) {
		if (mass_of_max[i] < min_of_max) {
			min_of_max = mass_of_max[i];
		}
	}
	printf("Наименьшим из %d максимумов [ ", cnt);
	for (int i = 0; i < cnt; i++) {
		printf("%d ", mass_of_max[i]);
	}

	printf("] является %d\n", min_of_max);
}



int main() {
	setlocale(LC_ALL, "rus");
	int* mass;
	int n;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	mass = (int*)malloc(sizeof(int) * n);
	printf("Введите массив:\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &mass[i]);
	}

	search_of_maximums(mass, n);
	maximums_counter(mass, n);
	search_of_minimal_max(mass, n);

	free(mass);
	system("pause");
	return 0;
}