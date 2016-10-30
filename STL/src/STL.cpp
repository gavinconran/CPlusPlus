//============================================================================
// Name        : STL.cpp
// Author      : gconran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <iterator>
#include <numeric>
#include <algorithm>

using namespace std;

int dice() { return rand() % 6 + 1; }

int main() {
	// Algorithms
	vector<int> vv(1000);
	generate(vv.begin(), vv.end(), dice);   	//generate
	cout << "Number of sixes: " << count(vv.begin(), vv.end(), 6) << endl; // count

	vector<int>::iterator firstfive = find(vv.begin(), vv.end(), 5); // find
	cout << "Number after first five: " << *(firstfive+1) << endl; // count

	reverse(vv.begin()+10, vv.begin()+100);		//reverse
	random_shuffle(vv.begin(), vv.end());		// random_shuffle

	sort(vv.begin(), vv.end());		// sort with '<'
	sort(vv.begin(), vv.end(), greater<int>() ); //sort with greater

	double a = max(1.2, 4.3);						// max
	cout << "max(1.2, 4.3) =  " << a << endl;

	vector<int>::iterator min_el = min_element(vv.begin(), vv.end());	// min_element
	cout << "The smallest element is: " << *min_el << endl;

	vector<int> u(10);
	for (unsigned int i = 0; i < u.size(); ++i) u[i] = i - 4;

//	while (binary_search(u.begin(), u.end(), 0)) {	// binary search
//		cout << "There exists a 0 element." << endl;
//		vector<int>::iterator zero = find(u.begin(), u.end(), -2);
//		u.erase(zero);
//	}

	// Container Examples
	vector<double> v(5, 1.2);
	list<int> l(5,4);
	map<string, int> m;
	m["ab"] = 1; m["yz"] = 4; m["fg"] = 0;

	map<string, int>::iterator mitr;
	for(mitr = m.begin(); mitr != m.end(); ++mitr )
		cout << (*mitr).first << " " << (*mitr).second << endl;

	list<int>::iterator litr;
	for(litr = l.begin(); litr != l.end(); ++litr )
		cout << (*litr) <<  endl;

	vector<double>::iterator vitr;
	for(vitr = v.begin(); vitr != v.end(); ++vitr )
		cout << (*vitr) << endl;
	return 0;
}
