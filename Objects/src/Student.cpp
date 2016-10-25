/*
 * Student.cpp
 * Class Implementation
 *
 *  Created on: 25 Oct 2016
 *      Author: gavin
 */

#include "Student.h"
#include <iostream>
#include <string>
using namespace std;


using namespace std;

Student::Student(string n, string m, int y) {
	name = n; firstname = m; year = y;
}

void Student::print() const {
	cout << this->name << ", " << this->firstname << " (YEAR " << this->year << ")" << endl;
}



