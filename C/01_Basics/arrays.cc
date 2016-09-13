# include <iostream>
using namespace std;

int main() {
    double x[100], y[100];    // declaration of two arrays
    int i;

    for (i = 0; i < 100; i++){
        x[i] = 2.0*1;
        y[99-i] = i;
    }

    for (i = 0; i < 100; i++)
        cout << i << ". x =  " << x[i] << ", y = " << y[i] << endl;
    return 0;
}



