//
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
#include "C:\Users\8584023\source\repos\acc-cosc-1337-fall-2019-shanebrown20\src\examples\12_module\08_arrays_dyn_1\bank_account.h"
//#include "src/examples/12_module/08_arrays_dyn_1/bank_account.h"
class Report
{
public:
	Report();
	void display() const;
	~Report();
private:
	BankAccount* accounts;
	const int SIZE{ 5 };
};