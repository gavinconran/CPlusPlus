/*
 * QuadraticClass.cpp
 *
 *  Created on: 26 Oct 2016
 *      Author: gavin
 */

#include "QuadraticClass.h"
#include <iostream>
#include <set>
#include <cmath>

using namespace std;

void QuadraticClass::printResult() {
	cout << "Roots are:";
	while (!rootSet.empty()) {
	    cout << ' ' << *rootSet.begin();
	    rootSet.erase(rootSet.begin());
	}
	cout << endl;
}


set<int> QuadraticClass::roots(int a, int b, int c) {


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

