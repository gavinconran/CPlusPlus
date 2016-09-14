#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double sum;
    int i;
    
    // both initialisation and completeion may include more than one statement
    for (i = 0, sum = 0.0; i <= 100; cout << i << endl, i++) { 
        sum += pow(2, - (double) i);
    }

    cout << "The sum of 1/2^i for i = 0,...,100 is " << sum << endl;

    // declare variable inside the initialisations - only defined for loop
    for (int j = 10; j > 0; j--) {  
        cout << j << endl;
    }
    return 0;
}


