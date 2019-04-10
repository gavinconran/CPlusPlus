//============================================================================
// Name        : Inheritance.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class base {
public:
	base() { cout << "Constructing base." << endl; }		 // non-virtual constructor
	virtual ~base() { cout << "Destructing base." << endl; } // virtual destructor
	virtual void print() const { cout << "base" << endl; }   // virtual!
	void show() const;                                       // non-virtual
};

class sub : public base {
public:
	sub() { cout <<  "Constructing sub." << endl;  }
	~sub() { cout << "Destructing sub." << endl; }
	void print() const { cout << "sub" << endl; }
};

class subsub : public sub {
public:
	void print() const { cout << "subsub" << endl; }
};

class subsubsub : public subsub {};

void base::show() const { print(); }  // or: this->print()


int main() {
	base *pp = new sub;

	delete pp;  // calls ~sub, "destructing sub", "Destructing base"


	base b; sub s; subsub ss; subsubsub sss;
	b.print(); s.print(); ss.print(); sss.print();	// "base", "sub", "subsub", "subsub"
	s.show(); b.show();

	base *p[3];		// pointers to base class
	p[0] = &ss; p[1] = &s; p[2] = &b;
	for (int i = 0; i < 3; i++) p[i]->print();	// "subsub", "sub", "base"
	return 0;
}
