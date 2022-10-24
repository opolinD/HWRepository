#include<stdio.h>
#include<locale.h>
#include<malloc.h>
void change_of_string(char*str) {
	gets();
	printf("¬ведите новую строку(до ста символов):\n");

	gets(str);
}
void cut_string(char* str) {
	int size = 0;
	int cut;
	printf("¬ведите до какого символа обрезаетс€ строка: ");
	scanf_s("%d", &cut);
	for (int i = 0; str[i] != '\0'; i++) {
		size++;
	}
	while (size < cut) {
		printf("¬ведите снова до какгого символа будет обрезатьс€ строка включительно: ");
		scanf_s("%d", &cut);
	}
	str[cut] = '\0';
}
void replace_sym(char* str) {
	char for_rep, after_rep;
	printf("¬ведите какой символ будет замен€тьс€ ");
	for_rep = getch();
	printf("\n¬ведите на какой символ заменить ");
	after_rep = getch();
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == for_rep) {
			str[i] = after_rep;
		}
	}
}
void registr_func(char*str){
	int choose1;
	printf("1. верхний регистр \n2. нижний регистр \n3. регистр как в предложени€х\n");
	scanf_s("%d", &choose1);
	if (choose1 == 1) {
		for (int i = 0; str[i] != '\0'; i++) {
			if ((str[i] >= 97) && (str[i] <= 122)) {
				str[i] -= 32;
			}
		}

	}
	else if (choose1 == 2) {
		for (int i = 0; str[i] != '\0'; i++) {
			if ((str[i] >= 65) && (str[i] <= 90)) {
				str[i] += 32;
			}
		}
	}
	else if (choose1 == 3) {
		for (int i = 1; str[i] != '\0'; i++) {
			if ((str[i - 1] == 33 || str[i - 1] == 44 || str[i - 1] == 46 || (str[i - 1] == 63) && (str[i] <= 122 && str[i] >= 97))) {
				str[i] -= 32;
			}
		}
		if (str[0] <= 122 && str[0] >= 97) {
			str[0] -= 32;
		}
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int choose = -1;
	char* str;
	str = (char*)(malloc(sizeof(char) * 100));
	printf("¬ведите строку: ");
	gets(str);
//------------------------
	while (choose != 0) {
		printf("1. заменить строку \n2. обрезать строку\n3. найти и заменить символ \n4. смеенить регистр\n0. выход \n¬аш выбор: ");
		scanf_s("%d", &choose); 
		switch (choose) {
			case 1:
				system("cls");
				change_of_string(str);
				system("cls");
				puts(str);
				break;
			case 2:
				system("cls");
				cut_string(str);
				system("cls");
				puts(str);
				break;
			case 3:
				system("cls");
				replace_sym(str);
				system("cls");
				puts(str);
				break;
			case 4:
				system("cls");
				registr_func(str);
				system("cls");
				puts(str);
				break;
		}
		printf("’отите выбрать что-то еще?\n");
	}
	free(str);
	return 0;
}