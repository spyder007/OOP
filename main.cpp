#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "customer.h"
using namespace std;

int main() {
	ifstream inp;
	ofstream outpE, outpO;
	string temp1, temp2, temp3, temp4;		//creates 4 strings named temp1, temp2, temp3, temp4
	inp.open("input.txt");					//opens file input.txt
	outpO.open("output.txt");				//opens file output.txt
	outpE.open("error.txt");				//opens file error.txt
	
	if (!inp)			//checks to ensure input.txt exists
	{
		cout << "input.txt not found" << endl;
		exit(1);
	}
	
	while(!inp.eof())
	{
		Customer customer1;					//customer 1 object is created
		getline(inp, temp1);				// get line functions called four times
		getline(inp, temp2);				//to get data from the file
		getline(inp, temp3);
		getline(inp, temp4);
		customer1.setfname(temp1);		//temp1 assigned to setfname
		customer1.setlname(temp2);		//temp2 assigned to setlname
		customer1.setold(temp3);		//temp3 assigned to set old
		customer1.setnew(temp4);		//temp4 passed to setnew
		float bill = customer1.getbill();		//value returned from getbill is stored in float bill
		int error = customer1.geterror();		//value returned from get error returned in error
		if (error == 0)
		{
			outpO << temp2 << ", " << temp1;			//prints all valid information to the ouput file
			outpO << fixed;								//declares outpO to have a fixed float number
			outpO << setprecision(2);					//use set precision function to limit output answer to 2 decimals
			outpO << setw(20) << bill << endl;			//using setw to get columns in the output
		}
		else
		{
			outpE << temp1 << "\n" << temp2 << "\n" << temp3 << "\n" << temp4 << "\n" << endl;
			//prints to the error.txt file
		}
		//customer1.display();	display code used for testing purposes
	}
	
	
	inp.close();		//closes input file
	outpE.close();		//closes error file
	outpO.close();		//closes output file

	
	
	
	return 0;
}