#include <iostream>
#include <set>
#include <unordered_set>
/*
int main()
{
	//Set of elements 4 -1 3 10
	//CRUD
	//CREATE
	//Sets order from smallest to biggest
	std::set<int> mySetOfInts;
	mySetOfInts.insert(4);//Key 1
	mySetOfInts.insert(4);
	mySetOfInts.insert(4);
	mySetOfInts.insert(-1);//Key 2
	mySetOfInts.insert(3); //Key 3
	mySetOfInts.insert(10);//Key 4

	//if we want to order it from greatest to smallest 
	//std::set<int, std::greater<int>> mySetOfInts;

	//without ordening use

	std::unordered_set<int> myUnorderedSetOfInts;
	myUnorderedSetOfInts.insert(4);
	myUnorderedSetOfInts.insert(-1);
	myUnorderedSetOfInts.insert(3);
	myUnorderedSetOfInts.insert(10);
	
	//READ
	std::cout << "SIZE ordered: " << mySetOfInts.size() << std::endl;
	
	for (int key : mySetOfInts)
	{
		std::cout << key << " ";
	}
	std::cout << std::endl;

	std::cout << "SIZE unordered: " << myUnorderedSetOfInts.size() << std::endl;

	for (int key : myUnorderedSetOfInts)
	{
		std::cout << key << " ";
	}
	std::cout << std::endl;

	std::set<int>::iterator it = mySetOfInts.find(10);
	if (it != mySetOfInts.end())
	{
		std::cout << "We found the element: " << *it << std::endl;
	}
	
	//UPDATE sets cannot be updated
	//DELETE
	mySetOfInts.erase(4);
}
*/