#include "list.h"

void printAllElements(std::list<int> list1)
{
	for (std::list<int>::iterator itTemp = list1.begin(); itTemp != list1.end(); ++itTemp)
	{
		std::cout << *itTemp << " ";
	}
	std::cout << std::endl;
}