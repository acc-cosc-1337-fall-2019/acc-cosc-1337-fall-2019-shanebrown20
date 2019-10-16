//bank_account.h
#ifndef BANK_ACCOUNT_H // header guards to prevent class redefinition error
#define BANK_ACCOUNT_H
#include <iostream>
class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {}; // inline constructor
	
	void deposit(int amount);
	void withdraw(int amount);
	int get_balance() const; // const makes class members read only
	friend void display(const BankAccount& account);
	friend std::ostream & operator << (std::ostream & out,
		const BankAccount & b);
	friend std::istream & operator >> (std::istream & in, BankAccount & b);
	BankAccount operator+ (const BankAccount & b);
protected:
	int balance;
};

#endif