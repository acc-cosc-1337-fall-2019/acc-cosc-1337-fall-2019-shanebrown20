//
#include "C:\Users\8584023\source\repos\acc-cosc-1337-fall-2019-shanebrown20\src\examples\12_module\10_arrays_dyn_3\report.h"
#include<iostream>

MyReport::MyReport()
{
	accounts = new BankAccount*[SIZE];
	std::cout << "Create Memory\n";
	// creates dynamic mem(heap) for each of the 5 addresses
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i]  new BankAccount(i * 10); 
	}
	

void  MyReport::display() const
{
	std::cout << "process\n";
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance() << '\n';
	}

}

MyReport::~MyReport()
{
	std::cout << "Free Memory\n";
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i];
	}
	delete[] accounts;
}