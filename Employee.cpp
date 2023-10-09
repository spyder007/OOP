#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
#include "Employee.h"


using namespace std;

// CONSTRUCTOR
People::People()
{
	fname = "blank";
	lname = "blank";
	error = 0;
}

Employee::Employee()
{
	hourlyrate = 0;
	hoursworked = 0;
	grosspay = 0;
}

//MODIFICATION MEMBER FUNCTIONS
void People::setfname(const string temp1)
{
	if (temp1.length() > 0)
	{
		fname = temp1;
	}
	else
	{
		fname = temp1;
		error = 1;
	}
}

void People::setlname(const string temp2)
{
	if (temp2.length() > 0)
	{
		lname = temp2;
	}
	else
	{
		lname = temp2;
		error = 1;
	}
}

void People::display(void) const
{
	cout << "Fname: " << fname;
	cout << "\nLname: " << lname;
}

//Constant member functions

int People::geterror () const
{
	return error;
}


string People::getfname(void) const
{
	return fname;
}

string People::getlname(void) const
{
	return lname;
}



void Employee::sethourlyrate(const float temp)
{
	if (temp >= 8.25)
	{
		hourlyrate = temp;
	}
}

float Employee::gethourlyrate(void) const
{
	return hourlyrate;
}

void Employee::sethoursworked(const float temp)
{
	if (temp >= 0)
	{
		hoursworked = 0;
	}
}

float Employee::gethoursworked(void) const
{
	return hoursworked;
}

void Employee::setgrosspay(const float rate, const float work)
{
	if(work >= 0 && rate >= 0)
	{
		if (work > 40)
		{
			grosspay = (rate * 40) + ((work-40) * (rate*1.5));
			
		}
		else
		{
			grosspay = work * rate;
		}
	}
}

float Employee::getgrosspay(void) const
{
	return grosspay;
}

void Employee::display(void) const
{
	string name = getlname() + ", "  + getfname();
	cout << fixed;
	cout << setprecision(2);
	cout << name << "\t" << grosspay << endl;
}