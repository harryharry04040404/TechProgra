#include "header.h"

int main() {
	std::vector<int> v1(5, 1);

	std::vector<int> v2(10, 0);

	std::vector<int> v3 = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	std::vector<std::string> v4 = { "Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" };

	std::vector<int> v5(v3);

	std::vector<Person> v6;

	v6.push_back(Person{"A", "01/01/1001", "11111111A"});
	v6.push_back(Person{"B", "02/02/2002", "22222222B"});
	v6.push_back(Person{"C", "03/03/3003", "33333333C"});
}