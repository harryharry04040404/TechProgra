#include "iostream"

#define A 10  //but also could be 'A'
#define B 4

//Dynamic Arrays
int* ResizeToDoubleCapacityArray(int* arrayResize, int capacity)
{
	//Create new array in the heap
	int* newArray = new int[capacity * 2];

	//Copy values to new array
	for (int i = 0; i < capacity * 2; i++)
	{
		newArray[i] = arrayResize[i];

		if (i >= capacity)
		{
			newArray[i] = 0;
		}
	}
	return newArray;
}

int main()
{
	//Create Dynamic Array
	std::cout << "Enter Array Size:" << std::endl; 

	//Stack
	int dynamicSize;

	std::cin >> dynamicSize;

	//Pointer in Stack, Memory in Heap
	int* dynamicArray1D = new int[dynamicSize];

	for (int i = 0; i < dynamicSize; i++)
	{
		dynamicArray1D[i] = i;
		std::cout << dynamicArray1D[i] << " ";
	}

	std::cout << std::endl;

	delete[] dynamicArray1D;  //Release memeory in heap
	dynamicArray1D = nullptr; //Set it to nullptr null pointer

	std::cout << "Enter new size of the array" << std::endl; 

	std::cin >> dynamicSize;
	dynamicArray1D = new int[dynamicSize];

	for (int i = 0; i < dynamicSize; i++)
	{
		dynamicArray1D[i] = i;
	}

	int* newDoubledArray = ResizeToDoubleCapacityArray(dynamicArray1D, dynamicSize);

	for (int j = 0; j < dynamicSize * 2; j++)
	{
		std::cout << newDoubledArray[j] << " ";
	}

	std::cout << std::endl;

	delete[] newDoubledArray;  
	newDoubledArray = nullptr;
}

//Const
struct D
{
	//Members
	int m_health = 100;

	const int getHealth() const //The returned value won't be modificable and neither
	{
		// won't compile bc lvalue must be modificable m_health = 4;

		return m_health;
	}
};

int main()
{
	const int C = 3; 

	int result = A + B;
	result = A + C;

	//ERROR
	result = B * A; //Compiler shouldn't know whether * is pointer or product

	result = C * A; //C is int so result must be int

	//int* p1; 
	int number = 3;
	int number2 = 1;

	int* p2 = &number2;

	//const int* const p1 = &number;		//int* const p1 = &number;	//int* p1 = &number;

	//p1 = p2;								//*p1 = 4;					//*p1 = 100; //number = 100

	std::cout << "Number: " << number << std::endl;
}