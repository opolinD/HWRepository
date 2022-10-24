#include<stdio.h>
#include<locale.h>
#include<malloc.h>

void counter_of_chars(char*str) {
	int count_c = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != 32) {
			count_c++;
		}
	}
	printf("В строке <%s> %d значимых символов\n", str, count_c);
}

void counter_of_low_chars(char* str) {
	int low_c = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			low_c++;
		}
	}
	printf("В строке <%s> %d прописных букв\n", str, low_c);
}

void counter_of_up_chars(char* str) {
	int up_c = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			up_c++;
		}
	}
	printf("В строке <%s> %d заглавных букв\n", str, up_c);
}

void counter_of_words(char* str) {
	int words = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] == 32) && (str[i + 1] != 32)) {
			words++;
		}
	}
	if (str[0] != 32) {
		words++;
	}
	printf("В строке <%s> %d слов\n", str, words);
}

int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	str = (char*)(malloc(sizeof(char) * 100));
	gets(str);
	
	counter_of_chars(str);
	counter_of_low_chars(str);
	counter_of_up_chars(str);
	counter_of_words(str);

	free(str);
	system("pause");
	return 0;
}