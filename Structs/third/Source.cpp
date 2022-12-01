#include<stdlib.h>
#include<stdio.h>
#include<string>
struct Dimension {
	int height;
	int depth;
	int width;
};
struct  BJUK {
	int belki;
	int jiry;
	int uglevody;
	float kkal;
};
struct FIO {
	std::string last_name;
	std::string first_name;
	std::string patronymic;
};
struct dish {
	struct BJUK sost;
	std::string name;
	int cost;

};
int main() {
	struct Dimension table = {90, 90, 180};
	struct  BJUK fish_n_chips = {7, 10,20,700};
	struct FIO stud;
	struct dish fish_n_chips1;
	stud.first_name = "Alexandr";
	stud.last_name = "Kovalev";
	stud.patronymic = "Alexeevich";
	fish_n_chips1.sost = fish_n_chips;
	fish_n_chips1.cost = 40;
	fish_n_chips1.name = "fish_n_chipss";
	system("pause");
	return 0;
}