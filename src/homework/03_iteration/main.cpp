//write include statements
#include "dna.h"
#include<iostream>
#include<string>
//write using statements
using std::string;
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto user_choice = 'y';

	do
	{
		
		
	
		int option;
		string dna;
		cout << "Enter 1 for Get GC Content or 2 for Get DNA Complement: " << "\n";
		cin >> option;
		cout << "Enter a DNA string: " << "\n";
		cin >> dna;

		if (option == 1)
		{
			cout << get_gc_content(dna) << "\n";
		}
		else if (option == 2)
		{
			cout << get_dna_complement(dna) << "\n";
		}
		else
		{
			cout << "Invalid option";
		}


		cout << "Loop again y or n? ";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');
	
	return 0;
}