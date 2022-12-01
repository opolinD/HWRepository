#include<string>
#include<stdlib.h>
#include<iostream>
struct Dimension {
	int height;
	int depth;
	int width;
};
//���� ���������� �����
void input(struct Dimension* sizes) {
	std::cout << "Input height: ";
	std::cin >> (*sizes.height);
	std::cout << "Input depth: ";
	std::cin >> (*sizes.depth);
	std::cout << "Input width: ";
	std::cin >> (*sizes.width);
}
// ������ ����������� �����
int calculateSquare(struct Dimension sizes) {
	int square_bok, square_updown, square_front, square;
	// 2 ������� ������
	square_bok = 2 * sizes.height * sizes.depth;
	// ������� � ������ ������
	square_updown = 2 * sizes.width * sizes.depth;
	// 1 �������� ������
	square_front = sizes.height * sizes.width;
	square = square_bok + square_updown + square_front;
	return square;
}
// ������ ������ �����
int calculateVolume(struct Dimension sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}
// ������ ������� ������ ����� �� ���� ����
// consumption � ������ ������ �� �2
float calculateDye(struct Dimension sizes, float consumption) {
	// � ������� ���������� ����� ������� ��������� ������� �����������
	int square = calculateSquare(sizes);
	// ���� ������ � ������� ��������� ������� ������ �����
	float dye_needed = square * consumption;
	return dye_needed;
}
//������ ������ ��������� �� �������� ������� ������ � ���� ������
void calculatePaintingCost(struct Dimension sizes, float consumption, float workCost, float paintCost) {
	float dye_needed = calculateDye(sizes,consumption);
	int square = calculateSquare(sizes);
	float cost_of_all_dye = dye_needed * paintCost;
	float cost_of_all_work = square * workCost;
	float all_cost = cost_of_all_dye + cost_of_all_work;
}
//������ ��������� ����� �� �������
void calculateCupboardCost(struct Dimension sizes, float cupboardCost) {
	int square = calculateSquare(sizes);
	float cost_of_all_cupboard = square * cupboardCost;
}
//������� ����� ����� �� ���������� ���� �2.
float calculateWeigtCb(struct Dimension sizes, float cupboardWeight) {
	int square = calculateSquare(sizes);
	float weight = square * cupboardWeight;
	return weight;
}
//������� ������� ������� �� ���� �� �������� ���������� ������ � ��������� ������� �� ���� 1 ��.
float calculateClimbCb(struct Dimension sizes, float climbCost, int floors, float cupboardWeight) {
	float weight = calculateWeigtCb(sizes, cupboardWeight);
	float full_climb_cost = cupboardWeight * floors * climbCost;
	return full_climb_cost;
}
//������� ������� ������ ��������� � ���������, ��������� �������� ������������� � ��������� � �������.
float calculateCost(struct Dimension sizes, float consumption, float workCost, float paintCost, float cupboardCost, float cupboardWeight, float climbCost, int floors,float delivery) {
	int dye_needed = calculateDye(sizes, consumption);
	int square = calculateSquare(sizes);
	float cost_of_all_dye = dye_needed * paintCost;
	float cost_of_all_work = square * workCost;
	float all_cost = cost_of_all_dye + cost_of_all_work;//������ ��������� ��������
	float cost_of_all_cupboard = square * cupboardCost;//�������� �� �������
	float climb_cost = calculateClimbCb(sizes, climbCost, floors, cupboardWeight);//��������� �� �������� �� ������� �����
	float full_cost = delivery + all_cost + cost_of_all_cupboard + climb_cost;

	return full_cost;
}
int main() {
	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	// ��������� ��������� ����� �� �2
	float cupboardCost = 650;
	// ��� ��/�2
	float weight = 0.9;
	// ����� ������
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