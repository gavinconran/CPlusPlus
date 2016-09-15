// dynamic pointer memory allocation for C and C++

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    double *x;
    int n;
    cout << "How many numbers would you like to input : ";
    cin >> n;
    x = new double[n];                                      // C++: allocate memory
    //x = (double *)malloc((unsigned long) n*sizeof(double)); // C: allocate memory
    if (x == NULL) {
        cout << "Could not allocate memory" << endl;
        return 1;
    }
    for (int i = 0; i < n; i++) {
        cout << i+1 << ". number: ";
        cin >> x[i];          // usage like array
    }
    for (int i = 0; i < n; i++)
        cout << x[i] << "  ";

    delete [] x;         // C++: free   memory
    //free(x);             // C: free memory
    
    return 0;

}
