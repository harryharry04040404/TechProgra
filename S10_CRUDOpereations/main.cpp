#include<vector>
#include<iostream>

//CREATE READ UPDATE DELETE

	//S1

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	std::vector<int> first;											// empty vector of ints
	std::vector<int> second(4, 100);								// four ints with value 100
	std::vector<int> third = { 4, 100 };							// two ints 4 & 100
	std::vector<int> fourth(third);									// a copy of third

	std::vector<int> v1 = { 3, 7, 2 };

	//acces operator 
	v1[1] = 10; // v1 = { 3, 10, 2 };
	*(v1.begin() + 1) = 20; // *(arr + 1) = 20; v1 = { 3, 20, 2 };

	//S2

	std::vector<int> myVector1;

	for (int i = 1; i <= 10; i++)
	{
		myVector1.push_back(i);
	}

	for (int j = 0; j < myVector1.size(); j++)
	{
		std::cout << myVector1[j] << " - " << std::endl;
	}

	//Iterator based for

	std::vector<int> myVector2;

	for (int i = 1; i <= 10; i++)
	{
		myVector2.push_back(i);
	}

	for (std::vector<int>::iterator it = myVector2.begin(); it != myVector2.end(); it++)
	{
		std::cout << *it << " - " << std::endl;
	}
	//S3

	//Iterator ranged based loop

	std::vector<int> myVector3 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (const auto& elem : myVector3)
	{
		std::cout << elem << "" << std::endl;
	}
}


