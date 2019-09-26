#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna)
{
	double count = 0;
	int total = dna.length();
	double gc_content;
	for (int i = 0; i < dna.length(); ++i)
	{
		if (dna[i] == 'G' || dna[i] == 'C')
		{
			count ++;
		}
	}
	gc_content = count/total;
	return gc_content;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
	string dna_rev = "";
	for (int i = dna.length() - 1; i >= 0; --i)
	{
		dna_rev += dna[i];
	}
	return dna_rev;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
	string dna_comp = get_reverse_string(dna);
	for (int i = 0; i < dna.length(); ++i)
	{
		if (dna_comp[i] == 'A')
		{
			dna_comp[i] = 'T';
		}
		else if (dna_comp[i] == 'T')
		{
			dna_comp[i] = 'A';
		}
		else if (dna_comp[i] == 'C')
		{
			dna_comp[i] = 'G';
		}
		else if (dna_comp[i] == 'G')
		{
			dna_comp[i] = 'C';
		}
	}
	return dna_comp;
}
