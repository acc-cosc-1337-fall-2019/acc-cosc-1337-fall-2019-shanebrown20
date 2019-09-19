//write includes statements
#include<iostream>
#include "loops.h"

//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int number;
	auto user_choice = 'y';
	do
	{
		cout << "Enter a number: ";
		cin >> number;
		cout << "Factorial of " << number << " is " << factorial(number) << "\n";
		
		

		cout << "Continue y or n";
		cin >> user_choice;


	} while (user_choice == 'y' || user_choice == 'Y');
	
		


	return 0;
}