#include<string>
#include<iostream>
#include<stdlib.h>
struct Dimension {
	int height;
	int depth;
	int width;
};
struct FIO {
	std::string last_name;
	std::string first_name;
	std::string patronymic;
};
struct jeans {
	int size;
	int pockets;
	std::string color;
};
struct body {
	float height;
	float weight;
	int age;
};
struct body create_body(struct body newBody) {
	struct body new_body;
	new_body.height = newBody.height;
	new_body.weight = newBody.weight;
	new_body.age = newBody.age;
}
struct jeans createJeans(int size, int pockets, std::string color) {
	struct jeans new_jeans;
	new_jeans.size = size;
	new_jeans.pockets = pockets;
	new_jeans.color = color;
	return new_jeans;
}
void initialDimension(struct Dimension* sizes) {
	int depth, width, height;
	std::cout << "Input  height: ";
	std::cin >> height;
	std::cout << "Input  depth: ";
	std::cin >> depth;
	std::cout << "Input  width: ";
	std::cin >> width;
	struct Dimension sizes = { height, depth ,width };

}
void inicialFIO(struct FIO* people) {
	std::cout << "Input first name: ";
	std::cin >> people->first_name;
	std::cout << "Input last name: ";
	std::cin >> people->last_name;
	std::cout << "Input patronymic: ";
	std::cin >> people->patronymic;
}
int main() {
	struct FIO me;
	inicialFIO(&me);
	system("pause");
	return 0;
}