#include "bank_account.h"
#include <iostream>
#include "atm.h"
#include <vector>
#include "customer.h"
using std::cout; using std::vector; using std::cin;


int main()
{
	Customer customer;
	customer.add_account(BankAccount(500));
	customer.add_account(BankAccount(1500));
	customer.add_account(BankAccount(5000));
	
	cout << customer;

	return 0;
}