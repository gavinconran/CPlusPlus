//============================================================================
// Name        : OverLoading.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Point {
	double x,y;
public:
	Point(double a = 0, double b = 0) { x = a; y = b; }
	// Overloading the () operator
	void operator() (double x) const {
		cout << "Function called with double x=" << x << "." << endl;
	}
	int operator() () const {
		cout << "Function called with ()." << endl;
	}
	// Overloading binary operators
	Point &operator-= (const Point &p) { x -= p.x; y -= p.y; return *this; }     // returns pointer to altered point
	Point operator- (const Point &p) const { Point r(x-p.x, y-p.y); return r; }  // returns a new Point
	// Overloading Relational operators
	bool operator< (const Point &p) const {
		return (x < p.x || (x == p.x && y < p.y));
	}
	// Overloading unary operators
	Point &operator++ () { x++; y++; return *this; }     			// prefix
	Point operator++ (int) { Point r(x,y); x++; y++; return r; } 	// postfix
	Point operator- () const { Point r(-x,-y); return r; }
	// Type casting
	operator double() const { return x; }
 	// Print
	void print() const { cout << x << "," << y << endl; }
	void print(ostream &os) const { os << "(" << x << "," << y << ")"; }
};

ostream &operator<< (ostream &os, const Point &p) {
	p.print(os);
	return os;
}

// Operator overloading
class A {
public:
	void operator[] (int i) {
		cout << "You want: [" << i << "]." << endl;
	}
};

// Function overloading
void print(int i) { cout << "i = " << i << endl; }
void print(double a, double b) {
	cout << "a = " << a << ", b = " << b << endl;
}

int main() {
	// Overlaoding the () operator
	Point pppp;
	pppp(2.0);							// 'Function called with double x=2 '
	int i = pppp();						// 'Function called with (). '
	print(i);

	// Overloading unary operators
	Point ppp(0,0);
	cout << ppp++ << endl;				// '(0,0)'		// postfix
	cout << ppp << endl;				// '(1,1)'

	cout << ++ppp << endl;				// '(2,2)'		// prefix
	cout << ppp << endl;				// '(2,2)'

	cout << -ppp << endl;				// '(-2,-2)'	// always prefix
	cout << ppp << endl;

	// Type casting
	cout << (double) ppp << endl;		// '2'

	// Overloading binary operators
	Point pp(1.0,2.0), qp(0.0,0.5), r;
	r = pp -= qp;
	pp.print(); 						// '1, 1.5'

	r = pp - qp;
	r.print();							// '1, 1'

	if (r < pp) { r.print(); }
	else { pp.print(); }


	// Operator overloading
	A a;
	a[5];		// 'You want: [5].'

	// Pointers to overloaded functions
	void (*p)(int)				= print;
	void (*q)(double, double) 	= print;
	p(2);					// 'i = 2'
	q(1.0,2.0);				// 'a = 1, b = 2'
	return 0;
}
