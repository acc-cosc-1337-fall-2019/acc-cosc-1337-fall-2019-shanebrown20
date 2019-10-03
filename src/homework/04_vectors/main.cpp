#include"vectors.h"
#include<iostream>

using std::cout;
using std::cin;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	auto user_choice = 'y';

	do
	{
		int option;
		cout << "Enter 1 for Get Max or 2 for Get Primes \n";
		cin >> option;
		if (option == 1)
		{
			vector<int> numbers = {};
			cout << "Enter 5 numbers \n";
			int user_num;
			for (int i = 1; i <= 5; i++)
			{
				cin >> user_num;
				numbers.push_back(user_num);
			}

			cout << "Max is " << get_max_from_vector(numbers) << "\n";

		}
		else if (option == 2)
		{
			int user_num;
			cout << "Enter a number: ";
			cin >> user_num;
			vector<int> prime_vector = vector_of_primes(user_num);
			cout << "Primes are: ";
			for (auto num : prime_vector)
			{
				cout << num << ", ";
			}
			cout << "\n";
			
		}
		else
		{
			cout << "Invalid option \n";
		}

		cout << "Loop again y or n? ";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');

	return 0;
}