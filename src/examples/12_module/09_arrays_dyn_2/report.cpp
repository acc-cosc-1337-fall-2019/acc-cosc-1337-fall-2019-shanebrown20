//
#include "C:\Users\8584023\source\repos\acc-cosc-1337-fall-2019-shanebrown20\src\examples\12_module\09_arrays_dyn_2\report.h"
#include<iostream>

Report::Report()
{

	accounts = new BankAccount[SIZE]; // calls default constructor
}

void Report::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i].get_balance() << '\n';
	}

}

Report::~Report()
{
	delete[] accounts;
}