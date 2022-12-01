#include<string>
#include<stdlib.h>
#include<iostream>
struct Dimension {
	int height;
	int depth;
	int width;
};
//ввод параметров шкафа
void input(struct Dimension* sizes) {
	std::cout << "Input height: ";
	std::cin >> (*sizes.height);
	std::cout << "Input depth: ";
	std::cin >> (*sizes.depth);
	std::cout << "Input width: ";
	std::cin >> (*sizes.width);
}
// расчЄт поверхности шкафа
int calculateSquare(struct Dimension sizes) {
	int square_bok, square_updown, square_front, square;
	// 2 боковые крышки
	square_bok = 2 * sizes.height * sizes.depth;
	// верхн€€ и нижн€€ крышки
	square_updown = 2 * sizes.width * sizes.depth;
	// 1 передн€€ крышка
	square_front = sizes.height * sizes.width;
	square = square_bok + square_updown + square_front;
	return square;
}
// расчЄт объЄма шкафа
int calculateVolume(struct Dimension sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}
// расчЄт сколько краски нужно на весь шкаф
// consumption Ц расход краски на м2
float calculateDye(struct Dimension sizes, float consumption) {
	// с помощью написанной ранее функции вычисл€ем площадь поверхности
	int square = calculateSquare(sizes);
	// зна€ расход и площадь вычисл€ем сколько краски нужно
	float dye_needed = square * consumption;
	return dye_needed;
}
//расчет полной стоимости за покраску включа€ работу и цену краски
void calculatePaintingCost(struct Dimension sizes, float consumption, float workCost, float paintCost) {
	float dye_needed = calculateDye(sizes,consumption);
	int square = calculateSquare(sizes);
	float cost_of_all_dye = dye_needed * paintCost;
	float cost_of_all_work = square * workCost;
	float all_cost = cost_of_all_dye + cost_of_all_work;
}
//расчет стоимости шкафа за площадь
void calculateCupboardCost(struct Dimension sizes, float cupboardCost) {
	int square = calculateSquare(sizes);
	float cost_of_all_cupboard = square * cupboardCost;
}
//расчЄта массы шкафа по известному весу м2.
float calculateWeigtCb(struct Dimension sizes, float cupboardWeight) {
	int square = calculateSquare(sizes);
	float weight = square * cupboardWeight;
	return weight;
}
//‘ункци€ расчЄта подъЄма на этаж по заданным количеству этажей и стоимости подъЄму на этаж 1 кг.
float calculateClimbCb(struct Dimension sizes, float climbCost, int floors, float cupboardWeight) {
	float weight = calculateWeigtCb(sizes, cupboardWeight);
	float full_climb_cost = cupboardWeight * floors * climbCost;
	return full_climb_cost;
}
//‘ункци€ расчЄта полной стоимости с доставкой, стоимость доставки зафиксирована и передаЄтс€ в функцию.
float calculateCost(struct Dimension sizes, float consumption, float workCost, float paintCost, float cupboardCost, float cupboardWeight, float climbCost, int floors,float delivery) {
	int dye_needed = calculateDye(sizes, consumption);
	int square = calculateSquare(sizes);
	float cost_of_all_dye = dye_needed * paintCost;
	float cost_of_all_work = square * workCost;
	float all_cost = cost_of_all_dye + cost_of_all_work;//полна€ стоимость покраски
	float cost_of_all_cupboard = square * cupboardCost;//соимость за площадь
	float climb_cost = calculateClimbCb(sizes, climbCost, floors, cupboardWeight);//стоимость за доставку до нцжного этажа
	float full_cost = delivery + all_cost + cost_of_all_cupboard + climb_cost;

	return full_cost;
}
int main() {
	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	// стоимость материала шкафа за м2
	float cupboardCost = 650;
	// вес кг/м2
	float weight = 0.9;
	// число этажей
	int floorsCount = 5;
	float deliveryCost = 500.00;
	float riseCost = 2.50;
	struct Dimension cupboard;
	std::cout << "CUPBOARD PARAMETERS\n";
	input(&cupboard);
	float cost;
	cost = calculateCost(cupboard, paintConsumption, paintWorkCost, paintCost, cupboardCost, weight, riseCost, floorsCount, deliveryCost);

	std::cout << "Total cost: " << cost;
	return 0;
}