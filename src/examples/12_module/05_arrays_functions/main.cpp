#include "arr_functions.h"
#include <iostream>
int main() 
{
	const int SIZE = 5;
	// hours is a pointer to first array element/address
	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	int* hours_ptr = hours;

	iterate_array(hours_ptr, SIZE);
	std::cout << "\n";

	int* numbers = new int[SIZE]; // allocate memory
	for (int i = 0; i < SIZE; ++i)
	{
		numbers[i] = i;
	}
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << numbers[i] << "\n";
	}
	delete[] numbers;// deallocate
	numbers = nullptr;

	return 0;
}