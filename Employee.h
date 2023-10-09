// CLASS PROVIDED:  People (an ADT for a Customer)
//
// CONSTRUCTOR for the People class:
//   Customer()
//     Description:		constructor will initialize Customer objects
//     Preconditions:	none
//     Postcondition:	fname and lname  are set to blank
//
// MODIFICATION MEMBER FUNCTIONS for the People class
//   void setfname (const string value)
//     Description:		sets a value to the fname variable
//     Precondition:	musst return a number > 0 when put through length() function
//     Postcondition:	fname has been set to value
//
//   void setfname (const string value)
//     Description:		sets a value to the lname variable
//     Precondition:	musst return a number > 0 when put through length() function
//     Postcondition:	lname has been set to value

//  void display (void) const
//		Description:	print out the values read from the file on the screen
//		Precondtion:	none
//		Postcondition:	values print to cout
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
//
//	string getfname (void) const
//		Description: return value of fname
//		Preconditions: none
//		Postconditions: value of fname returned
//
//		string getlname (void) const
//		Description: return value of lname
//		Preconditions: none
//		Postconditions: value of lname returned
#ifndef EMPLOYEE_H
#define EMPLOYEEh_H
#include <string>
#include <fstream>
class People
{
  public:
    // CONSTRUCTOR
    People();
    

    // MODIFICATION MEMBER FUNCTIONS
    int geterror(void) const;
    std::string getfname(void) const;
    std::string getlname(void) const;
    

    // CONSTANT MEMBER FUNCTIONS
    void setfname(const std::string);
    void setlname(const std::string);
    void display(void) const;

  private:
  	std::string fname;
  	std::string lname;
    int error;
};

class Employee: public People
{
	public:
		Employee();
		
		//getters
		float gethourlyrate(void) const;
		float gethoursworked(void) const;
		float getgrosspay(void) const;
		
		//setters
		void sethourlyrate(const float);
		void sethoursworked(const float);
		void setgrosspay(const float, const float);
		void display(void) const;
	
	private:
		int hourlyrate;
		int hoursworked;
		int grosspay;
		
		
};

#endif