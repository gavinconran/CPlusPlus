//============================================================================
// Name        : Objects.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

#include "Student.h"

class student {
	string name, firstname;
	int year;
public:
	student(const string &n = "unknown", const string &fn = "unkown", int y = 1) {
		name = n; firstname = fn; year = y;
	}
	void print();
};

void student::print() {
	cout << this->name << ", " << this->firstname << " (YEAR " << this->year << ")" << endl;
}

int main() {
	// using class student
	student s1("Conran", "Gavin", 10);
	student s2("Smith", "Alan", 1);
	s1.print();
	s2.print();

	// using class in separate file with header file Student
	Student S1("Conran", "Gavin",30);
	Student S2("Smith", "Alan", 10);
	S1.print();
	S2.print();
	return 0;
}
