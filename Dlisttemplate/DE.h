// Specification file for the DirectoryEntry class
#ifndef DIRECTORYENTRY_H
#define DIRECTORYENTRY_H

#include <iostream>
using namespace std;

class DirectoryEntry;	// Forward Declaration

						// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const DirectoryEntry &);
istream &operator >> (istream &, DirectoryEntry &);

// The DirectoryEntry class holds distances or measurements
// expressed in name and number.

class DirectoryEntry
{
private:
	std::string name;        // To hold a number of name
	std::string number;
	int numberInt;
	char charChar;
	int position;
	char* ayChar;
	// To hold a number of number
public:
	// Constructor
	DirectoryEntry(std::string f = "", std::string i = "",
		int numInt = 0, char c = NULL, char a[] = NULL, int pos = 0)
	{
		name = f;
		number = i;
		numberInt = numInt;
		charChar = c;
		position = pos;
		ayChar = a;
	}

	// Mutator functions
	void setName(std::string f)
	{
		name = f;
	}

	void setNumber(std::string i)
	{
		number = i;
	}

	// Accessor functions
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
	// Overloaded operator functions
	bool operator > (const DirectoryEntry &);		// Overloaded >
	bool operator < (const DirectoryEntry &);		// Overloaded <
	bool operator == (const DirectoryEntry &);		// Overloaded ==
	bool operator != (const DirectoryEntry &);		// Overloaded ==


													// Friends
	friend ostream &operator << (ostream &, const DirectoryEntry &);
	friend istream &operator >> (istream &, DirectoryEntry &);
};

#endif
