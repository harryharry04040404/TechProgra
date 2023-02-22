#include "header.h"

int main() {

	std::vector<int> vector(10000, -1);
	std::vector<int> vector2(10000, 2);

	std::vector<int> vector3 = Addvectors(vector, vector2);

	std::vector<int>::iterator it;

	it = vector.begin();

	while (it != vector.end()) {

		std::cout << vector3.at(*it);
	}

	CountingNegatives(vector3);

	std::cout << std::endl;

	while (it != vector.end()) {

		std::cout << vector3.at(*it);
	}
}