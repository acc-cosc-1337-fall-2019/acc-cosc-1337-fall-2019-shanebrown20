#include "decisions.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double overtime_hours = 0;
	double overtime_rate = 1.5 * hourly_rate;
	if (hours > 40)
	{
		overtime_hours = hours - 40;
		hours = 40;
	}
	return hours * hourly_rate + overtime_hours * overtime_rate;
}