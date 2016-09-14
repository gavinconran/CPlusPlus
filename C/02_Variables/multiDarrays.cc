#include <iostream>
using namespace std;

int main() {
   int i,j,k,l;
    double A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    double x[3] = {10,12,-6};
    double y[3];
    double M[2][2][2][2];   // 4 dimensional

    // compute y = A*x using loops
    for (i = 0; i < 3; i++)
        for (y[i] = j = 0; j < 3; j++)
            y[i] += A[i][j] * x[j];
    cout << "y = A*x = ";
    for (i = 0; i < 3; i++)
        cout << y[i] << " ";

    for ( i = 0; i < 3; i++)
        cout << y[i] << " ";
    cout << endl << "M = ";

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            for (k = 0; k < 2; k++)
                for (l = 0; l < 2; l++) {
                    M[i][j][k][l] = 1000*i + 100*j + 10*k + l;
                    cout << M[i][j][k][l] << "    ";
                }
    cout << endl;        
    return 0;
}


      

    


