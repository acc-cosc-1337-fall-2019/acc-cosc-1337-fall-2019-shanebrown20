#include "bank_account.h"
#include <iostream>
#include "atm.h"
#include <vector>
using std::cout; using std::vector;


int main()
{
	// scan card and enter pin
	// get customer record from database and enter them into a vector
	vector<BankAccount> accounts{ BankAccount(500), BankAccount(600),BankAccount(1000) };
	
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();


	return 0;
}