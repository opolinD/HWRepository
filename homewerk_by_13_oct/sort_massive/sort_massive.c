#include<stdio.h>
#include<malloc.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
void sort_mass(int* mass, int n, int* swaps, int* comps) {
	*swaps = 0;
	*comps = 0;
	int index_of_max_elem = 0, prd, maxelem = 0;
	while (n != 0) {
		for (int i = 0; i < n; i++) {
			if (maxelem < mass[i]) {
				maxelem = mass[i];
				index_of_max_elem = i;
			}
			comps++;
		}
		prd = mass[n - 1];
		mass[n - 1] = maxelem;
		mass[index_of_max_elem] = prd;
		maxelem = 0;
		n--;
	}
	free(mass);
}
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int* mass;
	int n, swaps = 0, comps = 0;
	printf("¬ведите размер массива: ");
	scanf_s("%d", &n);
	mass = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		mass[i] = rand();
	}
	//----------------------------------------------------------------------------------
	sort_mass(mass, n, &swaps, &comps);
	//----------------------------------------------------------------------------------
	system("pause");
	return 0;
}