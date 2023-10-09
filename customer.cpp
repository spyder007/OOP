#include <iostream>
#include <fstream>
#include <string>
#include "customer.h"


using namespace std;

// CONSTRUCTOR
Customer::Customer()
{
	oldmeter = 0;
	newmeter = 0;
	error = 0;
}

//MODIFICATION MEMBER FUNCTIONS
void Customer::setfname(const string temp1)
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

void Customer::setlname(const string temp2)
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

void Customer::setold(const string temp3)
{
	if (temp3.length() > 0)
	{
		if (temp3.find_first_not_of(".0123456789") == -1)
		{
			oldmeter = stof(temp3.c_str());
		}
		else
		{
			oldmeter = stof(temp3.c_str());
			error = 1;
		}
		if (oldmeter > 9999 || oldmeter < 0)
		{
			error = 1;
		}
	}
	else
	{
		oldmeter = stof(temp3.c_str());
		error = 1;
	}
}

void Customer::setnew(const string temp4)
{
	if (temp4.length() > 0)
	{
		if (temp4.find_first_not_of(".0123456789") == -1)
		{
			newmeter = stof(temp4.c_str());
			if (newmeter > 9999 || newmeter < 0)
			{
				error = 1;
			}
		}
		else
		{
			newmeter = stof(temp4.c_str());
			error = 1;
		}
		}
	else
	{
		newmeter = stof(temp4.c_str());
		error = 1;
	}
}

void Customer::display(void) const
{
	cout << "Fname: " << fname;
	cout << "\nLname: " << lname;
	cout << "\nOld: " << oldmeter;
	cout << "\nNew: " << newmeter;
	cout << "\n Bill: " << (newmeter - oldmeter) * 0.20 << endl;
}

//Constant member functions

int Customer::geterror () const
{
	return error;
}

float Customer::getbill() const
{
	if (newmeter > oldmeter)
	{
	return (newmeter-oldmeter) * 0.20;
	}
	else if (newmeter < oldmeter)
	{
		return ((10000-oldmeter)+newmeter) * 0.20;
	}
}