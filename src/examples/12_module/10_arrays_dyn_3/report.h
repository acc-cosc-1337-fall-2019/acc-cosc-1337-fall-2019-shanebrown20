//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify


//
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
#include "C:\Users\8584023\source\repos\acc-cosc-1337-fall-2019-shanebrown20\src\examples\12_module\08_arrays_dyn_1\bank_account.h"
//#include "src/examples/12_module/08_arrays_dyn_1/bank_account.h"
class MyReport
{
public:
	MyReport();
	void display() const;
	~MyReport();
private:
	BankAccount** accounts; // pointer to pointer
	const int SIZE{ 5 };
};

