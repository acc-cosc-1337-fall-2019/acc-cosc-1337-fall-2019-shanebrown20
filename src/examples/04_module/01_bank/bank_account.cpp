//bank_account.cpp
#include "bank_account.h"

BankAccount::BankAccount()
{
	// code to read balance from database
	balance = 500;
}
void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
}

int BankAccount::get_balance()
{
	return balance;
}