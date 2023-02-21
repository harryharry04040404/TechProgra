#pragma once
#include <vector>
#include <string>

struct Person {

	std::string name;

	std::string dateOfBirth;

	std::string ID;
};

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

std::vector<std::string> ConcatVectors(std::vector<std::string>& v1, std::vector<std::string>& v2) {

	for (int i = 0; i < v2.size(); i++) {
		std::string j;

		j = v2[i];

		v1.push_back(j);
	}

	return v1;
}

std::vector<int> ShiftRight(std::vector<int>& v1, int newItem) {

	std::vector<int>::iterator it;
	it = v1.insert(v1.begin(), newItem);

	return v1;
}
/*
std::vector<int> RotateLeft(std::vector<int>& v1) {

	
	//v1.push_back(copy);
	v1.erase(v1.begin());
}

std::vector<int> SearchAdjacent(std::vector<int>& v1) {


}

std::vector<bool> IsPalindrome(std::vector<char> v1) {


}
*/
