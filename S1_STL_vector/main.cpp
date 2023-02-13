#include <vector>
#include <iostream>
/*
int main() {

	int arr[5] = { 1, 2, 3, 4, 5 };

	std::vector<int> first;										// empty vector of ints
	std::vector<int> second (4, 100);							// four ints with value 100
	std::vector<int> third = {4, 100};							// two ints 4 & 100
	std::vector<int> fourth (third);							// a copy of third
}
*/

int main() {
	std::vector<int> v1 = { 3, 7, 2 };

	//acces operator 
	v1[1] = 10; // v1 = { 3, 10, 2 };
	*(v1.begin() + 1) = 20; // *(arr + 1) = 20; v1 = { 3, 20, 2 };

}