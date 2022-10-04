#include <stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int age;
	scanf_s("%d", &age);
	if ((age <= 13) && (age >= 0)) {
		printf("%d - детство\n", age);
	}else if (14 <= age && age < 25) {
		printf("%d - молодость\n", age);
	}else if (25 <= age && age < 60) {
		printf("%d - зрелость\n", age);
	}else if (age < 0) {
		printf("Возраст не может быть отрицательным\n");
	}else {
		printf("%d - старость\n", age);
	}system("pause");
	return 0;
}