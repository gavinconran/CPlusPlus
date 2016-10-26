//============================================================================
// Name        : Quadratic.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Quadratic Root Finder in C++, Ansi-style
//============================================================================


#include "QuadraticClass.h"
#include <gtest/gtest.h>
using namespace std;

int main() {
	QuadraticClass equationClass(20); // Instantiate a new QuadraticClass object called result
	equationClass.roots(1, -4, 3);    // Compute Roots of Quadratic equation
	equationClass.printResult();	  // Print computed roots
	return 0;
}

