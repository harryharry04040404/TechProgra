#include <stdlib.h>
#include <iostream>
#include <vector>
#define NUM_SIZE 3

void SelectionSort(int arr[], int size)
{
	int swap = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
				

		}
	}

}


int SumaDiagonales(int arr[][NUM_SIZE], int size)
{
	int suma = 0;
	for (int i = 0; i < size; i++)
	{
		suma += arr[i][i];
		suma += arr[i][size -i -1];
	}
	return suma;
}



int main()
{
	int casa[3][3] = { {3,2,5},{4,7,8},{4,7,5} };
}


