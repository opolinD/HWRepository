#include<string>
#include<stdlib.h>
#include<iostream>
struct meals {
	std::string first_dish;
	std::string second_dish;
	std::string drink;
};
struct member_of_family {
	std::string name;
	std::string post;

};
int main() {
	struct meals* day;
	struct member_of_family* family;

	day = new struct meals[3];
	family = new struct member_of_family[2];
	day[0] = {"scram eggs" ,"sandwich" ,"black tea"};
	day[1] = { "soup", "rice with fish", "green tea" };
	day[2] = { "steak", "cheesecake", "lemonade" };
	family[0] = { "Maggie", "wife" };
	family[1] = { "Bob" ,"husband" };

	system("pause");
	return 0;
}