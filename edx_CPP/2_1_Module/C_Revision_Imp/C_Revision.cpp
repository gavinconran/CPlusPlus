//============================================================================
// Name        : C_Revision.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

#define SQR(a) ((a)*(a))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#ifndef Pi
	#define Pi 3.1415926535897932384626433832795028841971
#endif
#define DEBUG 1

// Default arguments
void print(int i = 10, int j = 5) { cout << i << " " << j << endl; }

// Immutability
void print_by_val(double x) { cout << x << endl; }
void print_by_ref(const double &x) { cout << x << endl; }

// Signatures of functions
void add_some(int *i) { (*i) += 3; }
void add_some(double *x) { (*x) += 1.5; }

// Passing variables to functions
void add_one_pt(double *x) { ++(*x); }
void add_one_rf(double &x) { ++x; }

int main() {
	// File input and output
	ofstream fout("output.txt");
	fout << "Hello World!" << endl;
	fout.close();
	// Default arguments
	print(2);
	// Immutability: pass variable byy reference but add keyword "const"
	double p = 3.14;
	print_by_val(p);
	print_by_ref(p);
	// Passing variables to functions
	// Passing a variable to a function by reference or by pointer is essentially the same thing.
	// My preference is to use pointers
	double f(1.23), g(0.0);
	add_one_pt(&f);
	add_one_rf(g);
	cout << "f = " << f << ", g = " << g << endl;

	// Functions
	int d(1);
	double e(1.23);
	add_some(&d); add_some(&e);
	cout << "d = " << d << ", e = " << e << endl;

	// Enumerations
	enum colour {red, green, blue, black};
	colour foreground = black;

	// Strings
	string a("abcd efg");
	string b = "xyz i jk";
	string c = a + b;
	cout << "First character of '" << c << "' is : " << c[0] << endl;


#ifdef MAX
	if (MAX(2.0,3.4) > 2.5) cout << "Square of pi is: " << SQR(Pi) << endl;
#endif

#if DEBUG
	cout << "Debugging switched on." << endl;
	cout << " --- " << __FILE__ << " line " << __LINE__ << "--- Compiled on "
			<< __DATE__ << "." << endl;
#else
	cout << "Debugging switched off." << endl;
#endif
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "exp(1.0) = " << exp(1.0) << endl;
	return 0;
}
