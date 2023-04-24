#include "list.h"

int main()
{
	//Create double linked list
	std::list<int> list1 = {3, 17, 92, 28};
	std::list<float> list2;

	//Read
	std::list<int>::iterator it = list1.begin();
	std::cout << *it << std::endl;

	//Print all elements
	/*
	for (std::list<int>::iterator itTemp = list1.begin(); itTemp != list1.end(); ++itTemp)
	{
		std::cout << *itTemp << "";
	}
	std::cout << std::endl;
	*/
	
	//Iterator X positions with advance(iterator, X)
	std::advance(it, 3);	

	//Erase
	it = list1.erase(it);
	it = list1.insert(it, 45);
	printAllElements(list1);

	//Create
	//list1.insert(it, 9); //if it weren`t the last element
	list1.push_back(9);
	std::list<int>::iterator it2 = list1.begin();

	it = list1.insert(it2, 37);
	printAllElements(list1);
}

