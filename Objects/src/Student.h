/*
 * Student.h
 * Class Declaration
 *
 *  Created on: 25 Oct 2016
 *      Author: gavin
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

class Student {
	string name, firstname;
	int year;
public:
	Student(string = "unknown", string = "unknown", int = 1);
	void print() const;
};

#endif /* STUDENT_H_ */
