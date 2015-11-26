#include "DE.h"
#include <string>

static std::string toLower(const std::string& str)
{
	std::string ret = str;

	for (char& c : ret)
		c = (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;

	return ret;
}

//************************************************************
// Overloaded > operator. Returns true if the current object *
// is set to a value greater than that of right.             *
//************************************************************

bool DirectoryEntry::operator > (const DirectoryEntry &right)
{
	return toLower(name) > toLower(right.name);
}

//************************************************************
// Overloaded < operator. Returns true if the current object *
// is set to a value less than that of right.                *
//************************************************************

bool DirectoryEntry::operator < (const DirectoryEntry &right)
{
	return toLower(name) < toLower(right.name);
}

//*************************************************************
// Overloaded == operator. Returns true if the current object *
// is set to a value equal to that of right.                  *
//*************************************************************

bool DirectoryEntry::operator == (const DirectoryEntry &right)
{
	return toLower(name) == toLower(right.name);
}

//*************************************************************
// Overloaded != operator. Returns true if the current object *
// is set to a value NOT equal to that of right.              *
//*************************************************************

bool DirectoryEntry::operator != (const DirectoryEntry &right)
{
	return !(*this == right);
}

//********************************************************
// Overloaded << operator. Gives cout the ability to     *
// directly display DirectoryEntry objects.                  *
//********************************************************

ostream &operator<<(ostream &strm, const DirectoryEntry &obj)
{
	//strm << obj.name << " name, " << obj.number << " number";
	strm << obj.name << " " << obj.number << " ";
	strm << obj.charChar << " " << obj.numberInt << "\n";
	//strm << obj.ayChar[4];
	for (int i = 0; i<5; i++)
	{
		strm << obj.ayChar[i];
	}
	strm << endl;
	return strm;
}

//********************************************************
// Overloaded >> operator. Gives cin the ability to      *
// store user input directly into DirectoryEntry objects.    *
//********************************************************

istream &operator >> (istream &strm, DirectoryEntry &obj)
{
	// Prompt the user for the name.
	cout << "name: ";
	strm >> obj.name;

	// Prompt the user for the number.
	cout << "number: ";
	strm >> obj.number;


	return strm;
}


