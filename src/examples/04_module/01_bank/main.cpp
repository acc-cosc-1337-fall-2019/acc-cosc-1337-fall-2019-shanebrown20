#include "bank_account.h"
#include <iostream>
#include "atm.h"
#include <vector>
using std::cout; using std::vector; using std::cin;


int main()
{
	BankAccount a;
	BankAccount b = a;
	display(a); // class friend function

	// scan card and enter pin
	// get customer record from database and enter them into a vector
	vector<BankAccount> accounts{ BankAccount(500), BankAccount(600),BankAccount(1000) };
	
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a;
	cout << a << "\n"; //overload operator

	return 0;
}