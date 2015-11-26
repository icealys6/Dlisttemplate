#include "MyEntry.h"
ostream &operator<<(ostream &strm, const MyEntry &obj)
{
	//strm << obj.name << " name, " << obj.number << " number";
	strm << obj.name << " " << obj.number << " ";
	strm << obj.charChar << " " << obj.numberInt;

	return strm;
}

