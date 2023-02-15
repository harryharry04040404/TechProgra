#include <vector>
#include <iostream>
//S1

/*
int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };

	std::vector<int> first;										// empty vector of ints
	std::vector<int> second (4, 100);							// four ints with value 100
	std::vector<int> third = {4, 100};							// two ints 4 & 100
	std::vector<int> fourth (third);							// a copy of third
}
*/
/* 
int main() {
	std::vector<int> v1 = { 3, 7, 2 };

	//acces operator 
	v1[1] = 10; // v1 = { 3, 10, 2 };
	*(v1.begin() + 1) = 20; // *(arr + 1) = 20; v1 = { 3, 20, 2 };
}
*/

//S2

//Iterator ranged for

/*
int main() {
	std::vector<int> myvector;
			
	for (int i = 1; i <= 10; i++) {
		myvector.push_back(i);
	}

	for (int j = 0; j < myvector.size(); j++) {
		std::cout << myvector[j] << " - " << std::endl;
	}
}
*/

//Iterator based for

/*
int main() {
	std::vector<int> myvector;
	
	for (int i = 1; i <= 10; i++) {
		myvector.push_back(i);
	}
	
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++) {
		std::cout << *it << " - " << std::endl;
	}
}
*/
