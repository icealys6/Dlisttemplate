// Specification file for the MyEntry class
#ifndef MYENTRY_H
#define MYENTRY_H

#include <iostream>
using namespace std;

class MyEntry;	// Forward Declaration

				// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const MyEntry &);

class MyEntry
{
private:
	std::string name;        // To hold a number of name
	std::string number;
	int numberInt;
	char charChar;     // To hold a number of number
public:
	MyEntry(std::string f = "", std::string i = "",
		int numInt = 0, char c = 'A')
	{
		name = f;
		number = i;
		numberInt = numInt;
		charChar = c;
	}
	void setName(std::string f)
	{
		name = f;
	}
	void setNumber(std::string i)
	{
		number = i;
	}
	std::string getName() const
	{
		return name;
	}
	std::string getNumber() const
	{
		return number;
	}
	int getNumInt() const
	{
		return numberInt;
	}
	char getChar() const
	{
		return charChar;
	}
	// Friends
	friend ostream &operator << (ostream &, const MyEntry &);
};

#endif
#ifndef MYENTRY_H
#define MYENTRY_H


class MyEntry
{
public:
	MyEntry();
	virtual ~MyEntry();
protected:
private:
};

#endif // MYENTRY_H
