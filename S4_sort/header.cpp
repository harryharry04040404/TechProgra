#include "header.h"

int MinPosition(const std::vector <int>& vector, int left, int right) {

	int position = left;

	for (int i = left + 1; i <= right; i++) {

		if (vector[i] < vector[position]) {

			left = i;
		}
	}

	return 0;
}

void SelectionSort() {}

void InsertionSort() {}

void CountingNegatives(std::vector <int>& vector) {

	std::vector<int>::iterator it;

	int counter = 0;

	it = vector.begin();

	while (it != vector.end()) {

		if (vector.at(*it) == -1) {

			vector.erase(it);

			counter++, it++;
		}
		else {

			it++;
		}
	}

	it = vector.begin();

	vector.insert(it, counter, -1);

	//counts -1 & erases them
	//if vector.end()
	//vector.insert(vector.begin())
}

std::vector<int> Addvectors(const std::vector<int>& v1, const std::vector<int>& v2) {

	std::vector<int> v3(v1.size() >= v2.size() ? v1 : v2); // if v1 >= v2 copy v1 to v3 else copy v2 to v3

	if (v1.size() >= v2.size()) {
		for (int i = 0; i < v2.size(); i++) {
			v3[i] += v2[i];
		}
	}
	else {
		for (int j = 0; j < v1.size(); j++) {
			v3[j] += v1[j];
		}
	}

	return v3;
}