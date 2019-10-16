#include "bank_account.h"
#include <iostream>
#include "atm.h"
#include <vector>
#include "customer.h"
#include "checking_account.h"
#include "savings_account.h"
using std::cout; using std::vector; using std::cin;


int main()
{
	CheckingAccount a(1500);
	cout << a;
	
	SavingsAccount savings(500);
	cout << savings;
	cout << "\n" << savings.get_balance() << "\n";
	savings.add_interest();
	cout << savings;

	BankAccount c = a + savings;
	cout << c;

	return 0;
}