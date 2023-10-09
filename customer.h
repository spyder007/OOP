// CLASS PROVIDED:  Customer (an ADT for a Customer)
//
// CONSTRUCTOR for the Customer class:
//   Customer()
//     Description:		constructor will initialize Customer objects
//     Preconditions:	none
//     Postcondition:	oldmeter and newmeter are set to 0
//
// MODIFICATION MEMBER FUNCTIONS for the Customer class
//   void setfname (const string value)
//     Description:		sets a value to the fname variable
//     Precondition:	musst return a number > 0 when put through length() function
//     Postcondition:	fname has been set to value
//
//   void setfname (const string value)
//     Description:		sets a value to the lname variable
//     Precondition:	musst return a number > 0 when put through length() function
//     Postcondition:	lname has been set to value
//
//   void setold (const string value)
//     Description:		set the value of the oldmeter variable
//     Precondition:	string must only contain numbers
//     Postcondition:	oldmeter has been set to value
//
//   void setnew (const string value)
//     Description:		set the value of the newmeter variable
//     Precondition:	string must only contain numbers
//     Postcondition:	newmeter has been set to value
//
//  void display (void) const
//		Description:	print out the values read from the file
//		Precondtion:	none
//		Postcondition:	values print to cout (used for testing purposes)
//
// CONSTANT MEMBER FUNCTIONS for the Customer class
//   int getbill (void) const
//     Description:		obtain new electric bill
//     Preconditions:	none
//     Postcondition:	difference of newmeter and oldmeter is returned
//
//   int geterror (void) const
//		Description: return the value of the error variable
//		Preconditions: none
//		Postcondition: value of error is returned
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <fstream>
class Customer
{
  public:
    // CONSTRUCTOR
    Customer();
    

    // MODIFICATION MEMBER FUNCTIONS
    float getbill(void) const;
    int geterror(void) const;

    // CONSTANT MEMBER FUNCTIONS
    void setfname(const std::string);
    void setlname(const std::string);
    void setold(const std::string);
    void setnew(const std::string);
    void display(void) const;

  private:
  	std::string fname;
  	std::string lname;
    float oldmeter;
    float newmeter;
    int error;
};

#endif