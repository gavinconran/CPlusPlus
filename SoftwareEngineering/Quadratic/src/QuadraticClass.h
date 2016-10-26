/*
 * QuadraticClass.h
 *
 *  Created on: 26 Oct 2016
 *      Author: gavin
 */

#ifndef QUADRATICCLASS_H_
#define QUADRATICCLASS_H_

#include <set>
using namespace std;

class QuadraticClass {
public:
	QuadraticClass();
	/**
	     * Find the integer roots of a quadratic equation, ax^2 + bx + c = 0.
	     * @param a coefficient of x^2
	     * @param b coefficient of x
	     * @param c constant term.  Requires that a, b, and c are not ALL zero.
	     * @return all integers x such that ax^2 + bx + c = 0.
	     */
	set<int> rootSet; // Empty Set of computed roots

public:
	// Constructor
	QuadraticClass(const int i = 10) {
		// Nothing to initialise
	}

	// Print Found Roots
	void printResult();

	// Compute Roots
	set<int> roots(int a, int b, int c);

};


#endif /* QUADRATICCLASS_H_ */
