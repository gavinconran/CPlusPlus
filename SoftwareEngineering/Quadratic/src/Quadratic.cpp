//============================================================================
// Name        : Quadratic.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Quadratic Root Finder in C++, Ansi-style
//             : main contains home brew unit tests
//============================================================================


#include "QuadraticClass.h"
#include <gtest/gtest.h>
using namespace std;

int main() {
	// Test 1
	QuadraticClass test1(20);			// Instantiate a new QuadraticClass object called result
	test1.roots(0, 1, 2);				// Compute Roots of Quadratic equation
	cout << "Test1: ";
	test1.printResult();	  			// Print Test 1 result: should be: -2


	// Test 2
	QuadraticClass test2(20);
	test2.roots(0, 0, 0);
	cout << "Test2: ";
	test2.printResult();	  			// Print Test 2 result: should be: no roots

	// Test 3
	QuadraticClass test3(20);
	test3.roots(0, 0, 2);
	cout << "Test3: ";
	test3.printResult();	  			// Print Test 2 result: should be: 2

	// Test 4
	QuadraticClass test4(20);
	test4.roots(0, 2, 0);
	cout << "Test4: ";
	test4.printResult();	  			// Print Test 4 result: should be: 0

	// Test 5
	QuadraticClass test5(20);
	test5.roots(1, -(5+8), 5*8);
	cout << "Test5: ";
	test5.printResult();	  			// Print Test 5 result: should be: 5, 8

	// Test 6
	QuadraticClass test6(20);
	test6.roots(1, -(-8+-2), -8*-2);
	cout << "Test6: ";
	test6.printResult();	  			// Print Test 6 result: should be: -8, -2

	// Test 7
	QuadraticClass test7(20);
	test7.roots(-7, -7*-1*(11+3), -7*11*3);
	cout << "Test7: ";
	test7.printResult();	  			// Print Test 7 result: should be: 11, 3

	// Test 8
	QuadraticClass test8(20);
	test8.roots(1, -9, 0);
	cout << "Test8: ";
	test8.printResult();	  			// Print Test 8 result: should be: 0, 9

	// Test 9
	QuadraticClass test9(20);
	test9.roots(1, -2*13, 13*13);
	cout << "Test9: ";
	test9.printResult();	  			// Print Test 9 result: should be: 13

	// Test 10
	QuadraticClass test10(20);
	test10.roots(1, 0, 0);
	cout << "Test10: ";
	test10.printResult();	  			// Print Test 10 result: should be: 0

	// Test 11
	int r1 =  45000; // a root ~45,000 means c is ~2,000,000,000, which is close to the maximum integer 2^31 - 1
	int r2 = -45000;
	QuadraticClass test11(20);
	test11.roots(1, -r1-r2, r1*r2);
	cout << "Test11: ";
	test11.printResult();	  			// Print Test 11 result: should be: 45000, -45000

	// Test 12
	QuadraticClass test12(20);
	test12.roots(1, 3, 2);
	cout << "Test12: ";
	test12.printResult();	  			// Print Test 12 result: should be -1, -2

	return 0;
}

