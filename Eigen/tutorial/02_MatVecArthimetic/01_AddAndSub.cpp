/*
  Introduction
  Eigen offers matrix/vector arithmetic operations either through 
      1) overloads of common C++ arithmetic operators such as +, -, *,   or through 
      2) special methods such as dot(), cross(), etc. 
  For the Matrix class (matrices and vectors), operators are only overloaded to support linear-algebraic operations. 
  For example, matrix1 * matrix2 means matrix-matrix product, and vector + scalar is just not allowed. 
  If you want to perform all kinds of array operations, not linear algebra, see the Array Class.
*/

// Addition and Subtraction
// $ g++ -I ../eigen_dir -o exp1 01_AddAndSub.cpp

#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;

int main()
{
  std::cout << "***** Addition & Subtraction *****" << std::endl;
  Matrix2d a;
  a << 1, 2,
       3, 4;
  MatrixXd b(2,2);
  b << 2, 3,
       1, 4;
  std::cout << "a + b =\n" << a + b << std::endl;
  std::cout << "a - b =\n" << a - b << std::endl;
  std::cout << "Doing a += b;" << std::endl;
  a += b;
  std::cout << "Now a =\n" << a << std::endl;
  Vector3d v(1,2,3);
  Vector3d w(1,0,0);
  std::cout << "-v + w - v =\n" << -v + w - v << std::endl;

  // Scalar multiplication and division
  std::cout << "***** Scalar multiplication and division *****" << std::endl;
  a << 1, 2,
       3, 4;
  std::cout << "a * 2.5 =\n" << a * 2.5 << std::endl;
  std::cout << "0.1 * v =\n" << 0.1 * v << std::endl;
  std::cout << "Doing v *= 2;" << std::endl;
  v *= 2;
  std::cout << "Now v =\n" << v << std::endl;

}




