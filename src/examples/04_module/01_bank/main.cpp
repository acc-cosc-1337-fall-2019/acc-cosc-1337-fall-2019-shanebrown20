#include "bank_account.h"
#include <iostream>
#include "atm.h"
#include <vector>
#include "customer.h"
#include "checking_account.h"
using std::cout; using std::vector; using std::cin;


int main()
{
	CheckingAccount a(1500);
	cout << a.get_balance();
	
	return 0;
}