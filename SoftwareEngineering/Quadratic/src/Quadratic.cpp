//============================================================================
// Name        : Quadratic.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Quadratic Root Finder in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
#include <cmath>
using namespace std;

class Quadratic {
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
	Quadratic(const int i) {
		// Nothing to initialise
	}

	// Print Found Roots
	void printResult();

	// Compute Roots
	set<int> roots(int a, int b, int c);

};

// Implementations
void Quadratic::printResult() {
	std::cout << "Roots are:";
	while (!rootSet.empty()) {
	    std::cout << ' ' << *rootSet.begin();
	    rootSet.erase(rootSet.begin());
	}
}

set<int> Quadratic::roots(int a, int b, int c) {


		double root1;
		double root2;

		if ( a==0 && b == 0 && c == 0 ) { // cannot have a=b=c=0
		            return rootSet;
		}

		if ( a == 0) { // linear equation
			if ( b == 0 ) {
				root1 = c;
		        rootSet.insert((int) root1);
		    } else {
		        root1 = -c / b;
		        rootSet.insert((int) root1);
		    }
		} else if ( b*b > 4*a*c ) { // two real roots
		        root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
		        root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
		        rootSet.insert((int) root1);
		        rootSet.insert((int) root2);
		} else if (b*b == 4*a*c) { // single recurring root
		        root1 = (int) (-b / (2*a));
		        rootSet.insert((int) root1);
		} else { // large roots
		        root1 = -1 * sqrt(abs(c));
		        root2 = sqrt(abs(c));
		        rootSet.insert((int) root1);
		        rootSet.insert((int) root2);
		}

		return rootSet;
}

int main() {
	Quadratic equation(10);    // Instanciate a new Quadratic object called result
	equation.roots(1, -4, 3);  // Compute Roots of Quadratic equation
	equation.printResult();    // Print computed roots
	return 0;
}
