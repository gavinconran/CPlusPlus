
// $ g++ -I ../eigen_dir -o exp1 01_ArrayClass.cpp

#include <Eigen/Dense>
#include <iostream>
using namespace Eigen;
using namespace std;
int main()
{
  // Array Class
  std::cout << "***** Array Class *****" << std::endl;
  ArrayXXf  m(2,2);
  
  // assign some values coefficient by coefficient
  m(0,0) = 1.0; m(0,1) = 2.0;
  m(1,0) = 3.0; m(1,1) = m(0,1) + m(1,0);
  
  // print values to standard output
  cout << m << endl << endl;
 
  // using the comma-initializer is also allowed
  m << 1.0,2.0,
       3.0,4.0;
     
  // print values to standard output
  cout << m << endl;

  // Addition & Subtraction
  std::cout << "***** Addition & Subtraction *****" << std::endl;
  ArrayXXf a(3,3);
  ArrayXXf b(3,3);
  a << 1,2,3,
       4,5,6,
       7,8,9;
  b << 1,2,3,
       1,2,3,
       1,2,3;
       
  // Adding two arrays
  cout << "a + b = " << endl << a + b << endl << endl;
  // Subtracting a scalar from an array
  cout << "a - 2 = " << endl << a - 2 << endl;

  // Array Multiplication
  std::cout << "***** Array Multiplication *****" << std::endl;
  cout << "a * b = " << endl << a * b << endl;

  // Other coefficient-wise operations
  std::cout << "***** Other coefficient-wise operations *****" << std::endl;
  ArrayXf aa = ArrayXf::Random(5);
  aa *= 2;
  cout << "aa =" << endl 
       << aa << endl;
  cout << "aa.abs() =" << endl 
       << aa.abs() << endl;
  cout << "aa.abs().sqrt() =" << endl 
       << a.abs().sqrt() << endl;
  // If you have two arrays of the same size, you can call .min(.) to construct 
  // the array whose coefficients are the minimum of the corresponding coefficients of the two given arrays. 
  cout << "aa.min(aa.abs().sqrt()) =" << endl 
       << aa.min(aa.abs().sqrt()) << endl;

  // Converting between array and matrix expressions
  // You cannot apply Matrix operations on arrays, or Array operations on matrices. 
  // Thus, if you need to do linear algebraic operations such as matrix multiplication, 
  // then you should use matrices; 
  // if you need to do coefficient-wise operations, then you should use arrays.
  // Sometimes you need to convert a matrix to an array or reversely. 
  // This gives access to all operations regardless of the choice of declaring objects as arrays or as matrices

  std::cout << "***** Converting between array and matrix expressions *****" << std::endl;
  MatrixXf mm(2,2);
  MatrixXf nn(2,2);
  MatrixXf result(2,2);
  mm << 1,2,
       3,4;
  nn << 5,6,
       7,8;
  result = mm * nn;
  cout << "-- Matrix m*n: --" << endl << result << endl << endl;
  result = mm.array() * nn.array();
  cout << "-- Array m*n: --" << endl << result << endl << endl;
  result = mm.cwiseProduct(nn);
  cout << "-- With cwiseProduct: --" << endl << result << endl << endl;
  result = mm.array() + 4;
  cout << "-- Array m + 4: --" << endl << result << endl << endl;

  result = (mm.array() + 4).matrix() * mm;
  cout << "-- Combination 1: --" << endl << result << endl << endl;
  result = (mm.array() * nn.array()).matrix() * mm;
  cout << "-- Combination 2: --" << endl << result << endl << endl;
}

