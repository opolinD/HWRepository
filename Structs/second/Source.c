#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<iostream>
struct Dimension {
	int height;
	int depth;
	int width;
};
struct  BJUK{
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
struct notebook {
	int pages;
	std::string design;
};
struct jeans {
	int size;
	int pockets;
	std::string color;
};
struct TV {
	float diag;
	float height;
	float frame_width;
	float width;
	int resolution;
	std::string firm;
};
struct body {
	float height;
	float weight;
	int age;
};
struct dish {
	struct BJUK;
	std::string name;
	int cost;

};
struct Worker {
	struct FIO name;
	struct Data B_day;
	float salary;
	int ID;
	std::string post;
};
struct student {
	struct FIO;
	float perf;
	int cours;
	std::string direct;
};
struct patient {
	struct body;
	struct FIO;
	std::string disease;
};
