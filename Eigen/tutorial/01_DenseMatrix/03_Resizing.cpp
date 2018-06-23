#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
  // Resizing
  // resize(), rows(), cols() and size()
  MatrixXd m(2,5);
  cout << "The matrix m is of size "
       << m.rows() << "x" << m.cols() << endl;
  cout << "It has " << m.size() << " coefficients" << endl;
  m.resize(4,3);
  cout << "The re-sized matrix m is of size "
       << m.rows() << "x" << m.cols() << endl;
  cout << "It has " << m.size() << " coefficients" << endl;
  cout << "As a matrix, m is of size "
       << m.rows() << "x" << m.cols() << endl;

  VectorXd v(2);
  v.resize(5);
  cout << "The vector v is of size " << v.size() << endl;

  cout << "As a matrix, v is of size "
       << v.rows() << "x" << v.cols() << endl;

  // Assignment and Resizing
  // Assignment is the action of copying a matrix into another, using operator=. 
  // Eigen resizes the matrix on the left-hand side automatically 
  // so that it matches the size of the matrix on the right-hand size
  MatrixXf a(2,2);
  cout << "a is of size " << a.rows() << "x" << a.cols() << endl;
  MatrixXf b(3,3);
  a = b;
  cout << "a is now of size " << a.rows() << "x" << a.cols() << endl;

  /*********************************************************************
  Convenience typedefs
  Eigen defines the following Matrix typedefs:

  MatrixNt for Matrix<type, N, N>. For example, MatrixXi for Matrix<int, Dynamic, Dynamic>.
  VectorNt for Matrix<type, N, 1>. For example, Vector2f for Matrix<float, 2, 1>.
  RowVectorNt for Matrix<type, 1, N>. For example, RowVector3d for Matrix<double, 1, 3>.
  Where:

  N can be any one of 2, 3, 4, or X (meaning Dynamic).
  t can be any one of:
      i (meaning int), 
      f (meaning float), 
      d (meaning double), 
      cf (meaning complex<float>), or 
      cd (meaning complex<double>). 
  The fact that typedefs are only defined for these five types doesn't mean that they are the only supported scalar types. 
  For example, all standard integer types are supported, see Scalar types.

  ***********************************************************************/

}

