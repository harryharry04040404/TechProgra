#include <iostream>
#include "Util.h"
//keyword
//Applies to attributes + methods

int main()
{
	srand(time(NULL));

	int number = Util::randomNumber();

	std::cout << number << std::endl;
}