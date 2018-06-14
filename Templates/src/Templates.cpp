//============================================================================
// Name        : Templates.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Examples of C++ Templates, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <typename T> class base {						// base template class
protected:
	T a;
public:
	base(T i = 0) : a(i) {}
	void print() const { cout << a << endl; }
};

template <typename T> class sub : public base<T> {		// refer to base<T>
protected:
	T b;
public:
	sub(T i, T j) : base<T>(i), b(j) {}					// its constructor
	void print() const { cout << base<T>::a << " " << b << endl; } // Note base<T>::a
};

class subsub : public sub<int> {
	int c;
public:
	subsub(int i, int j, int k = 0) : sub<int>(i,j), c(k) {}
	void print() const { cout << a << " " << b << " " << c << endl; }
};

// Recursive Compile time computations
template <int N>
class factorial {
public:
	enum { value = N * factorial<N-1>::value };
};

// One interesting result of template specialization is it's use in recursion. 
// The base case can be represented as a template specialization.
template <>
class factorial<0> {		// overload definition for factorial<int>
public:
	enum { value = 1 };
};

int main() {
	subsub	a(-1, 2);
	sub<double> b(1.2, 0.1);

	a.print(); b.print();

	// Recursive Compile time computations
	cout << "10! = " << factorial<10>::value << endl;
	return 0;
}
