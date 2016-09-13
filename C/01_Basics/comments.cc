# include <iostream>
using namespace std;

int main() {
    int i;          // an integer
    int sum;        /* used to add up i's */

    sum = 0;
    for (i=0; i<10; i++) {   // a for loop
        sum = sum + i;
    }
    cout << "The sum is " << sum << endl;
    return 0;
}



