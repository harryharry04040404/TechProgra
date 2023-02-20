#pragma once
#include <iostream>
#include <vector>

void Print(int value) {

	std::cout << value << " is an integer value" << std::endl;
}

void Print(std::string value) {

	std::cout << value << " is a string value" << std::endl;
}

void Print(double value) {

	std::cout << value << " is a double value" << std::endl;
}

int SumOfFibbonaci(int& value1, int& value2) {

	int value3 = value1 + value2;

	value1 = value2;

	value2 = value3;

	value3 = 0;

	return value1;
}

void Fibonacci(int valueN) {

	std::vector<int> myVector;

	int value1 = 0;

	int value2 = 1;

	myVector = { value1 };

	for (int i = 0; i < valueN; i++) {		

		std::cout << myVector[i] << std::endl;

		myVector.push_back(SumOfFibbonaci(value1, value2));	
	}
}

