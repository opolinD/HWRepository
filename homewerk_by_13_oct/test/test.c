#include<stdio.h>
#include<locale.h>
#include<malloc.h>


int main() {
	setlocale(LC_ALL, "rus");
	int cut;
	char* str;
	
	str = (char*)(malloc(sizeof(char) * 100));
	printf("¬ведите строку: ");
	gets(str);
	puts(str);
	scanf_s("%d", &cut);
	str[cut -1 ] = '\0';
	puts(str);
	system("pause");
	return 0;
}