// Basic arithmetic reduction operations
// Eigen also provides some reduction operations to reduce a given matrix or vector to a single value
// such as the 
//    sum (computed by sum()), 
//    product (prod()), or the 
//    maximum (maxCoeff()) and 
//    minimum (minCoeff()) of all its coefficients.

// $ g++ -I ../eigen_dir -o exp4 04_ReduceOps.cpp

#include <iostream>
#include <Eigen/Dense>
using namespace std;
int main()
{
  Eigen::Matrix2d mat;
  mat << 1, 2,
         3, 4;
  cout << "Here is mat.sum():       " << mat.sum()       << endl;
  cout << "Here is mat.prod():      " << mat.prod()      << endl;
  cout << "Here is mat.mean():      " << mat.mean()      << endl;
  cout << "Here is mat.minCoeff():  " << mat.minCoeff()  << endl;
  cout << "Here is mat.maxCoeff():  " << mat.maxCoeff()  << endl;
  cout << "Here is mat.trace():     " << mat.trace()     << endl;

// The trace of a matrix, as returned by the function trace(), 
// is the sum of the diagonal coefficients 
// and can also be computed as efficiently using a.diagonal().sum()

// There also exist variants of the minCoeff and maxCoeff functions 
// returning the coordinates of the respective coefficient via the arguments

  using namespace Eigen;

  Matrix3f m = Matrix3f::Random();
  std::ptrdiff_t i, j;
  float minOfM = m.minCoeff(&i,&j);
  cout << "Here is the matrix m:\n" << m << endl;
  cout << "Its minimum coefficient (" << minOfM 
       << ") is at position (" << i << "," << j << ")\n\n";
  RowVector4i v = RowVector4i::Random();
  int maxOfV = v.maxCoeff(&i);
  cout << "Here is the vector v: " << v << endl;
  cout << "Its maximum coefficient (" << maxOfV 
       << ") is at position " << i << endl;

}


