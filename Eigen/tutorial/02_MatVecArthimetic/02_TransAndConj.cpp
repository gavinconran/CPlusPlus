// Transposition and conjugation
// The transpose a^T, conjugate bar{a}, and adjoint (i.e., conjugate transpose) a^* of a matrix or vector a 
// are obtained by the member functions transpose(), conjugate(), and adjoint(), respectively.

// // $ g++ -I ../eigen_dir -o exp2 02_TransAndConj.cpp
// Example

#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;

int main()
{
  MatrixXcf a = MatrixXcf::Random(2,2);
  cout << "Here is the matrix a\n" << a << endl;
  cout << "Here is the matrix a^T\n" << a.transpose() << endl;
  cout << "Here is the conjugate of a\n" << a.conjugate() << endl;
  cout << "Here is the matrix a^*\n" << a.adjoint() << endl;

// As for basic arithmetic operators, transpose() and adjoint() simply return a proxy object 
// without doing the actual transposition. 
// If you do b = a.transpose(), then the transpose is evaluated at the same time as the result is written into b.

//
// For in-place transposition, as for instance in a = a.transpose(), simply use the transposeInPlace() function:
MatrixXf aip(2,3); aip << 1, 2, 3, 4, 5, 6;
cout << "Here is the initial matrix aip:\n" << aip << endl;
aip.transposeInPlace();
cout << "and after being transposed:\n" << aip << endl;

}

