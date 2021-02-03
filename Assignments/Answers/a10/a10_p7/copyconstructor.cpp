/*
CH-230-A
copyconstructor.cpp
Qais Qamhia
qqamhia@jacobs-university.de
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char* str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
	~NaiveString(); /* Destructor to release memory used in objects*/
};

NaiveString::NaiveString(const char* t) {
	cout << "Calling main constructor" << endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src) {
	cout << "Calling copy constructor" << endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

// Frees the dynamically allocated memory inside the object
// then deletes the object
NaiveString::~NaiveString() {
	cout << "Calling destructor" << endl;
	delete str;
}



void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

// Takes a NaiveString by reference, replaces all B's with C's
// Prints the string after modification
void funcByRef(NaiveString& s) {
	cout << "funcbyref() being called" << endl;
	s.update('B', 'C');
	s.print();
}


int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	cout << "\n";


	NaiveString b("A Bomplex Blass");  /* Using main constructor*/
	cout << "About to call funcbyval()" << endl;
	funcByVal(b);
	b.print();
	cout << "\n";

	NaiveString c(b);				   /* Using copy constructor*/
	cout << "About to call funcbyref()" << endl;
	funcByRef(c);
	c.print();
	cout << "\n";

}