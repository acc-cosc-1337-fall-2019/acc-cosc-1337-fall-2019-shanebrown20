#include "decisions.h"
using std::string;
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	if (credit_hours == 0)
	{
		return -1;
	}
	else
	{
		return credit_points / credit_hours;
	}
}

string get_letter_grade_using_if(int grade)
{
	if (grade >= 90 && grade <= 100)
	{
		return "A";
	}
	else if (grade >= 80 && grade <= 89)
	{
		return "B";
	}
	else if (grade >= 70 && grade <= 79)
	{
		return "C";
	}
	else if (grade >= 60 && grade <= 69)
	{
		return "D";
	}
	else if (grade >= 0 && grade <= 59)
	{
		return "F";
	}
	else 
	{
		return "Invalid number";
	}

}
string get_letter_grade_using_switch(int grade)
{
	grade = grade / 10;
	switch (grade)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		return "F";
	case 6:
		return "D";
	case 7:
		return "C";
	case 8:
		return "B";
	case 9:
	case 10:
		return "A";
	default:
		return "Invalid number";
	}
	return string();

}
