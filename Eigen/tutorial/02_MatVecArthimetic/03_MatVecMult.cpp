// Matrix-matrix and matrix-vector multiplication
// Matrix-matrix multiplication is again done with operator*. 
// Since vectors are a special case of matrices, they are implicitly handled there too, 
// so matrix-vector product is really just a special case of matrix-matrix product, and so is vector-vector outer product. 
// Thus, all these cases are handled by just two operators:

//    binary operator * as in a*b
//    compound operator *= as in a*=b (this multiplies on the right: a*=b is equivalent to a = a*b)

// $ g++ -I ../eigen_dir -o exp3 03_MatVecMult.cpp

#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;

int main()
{
  std::cout << "***** Multiplication *****" << std::endl;
  Matrix2d mat;
  mat << 1, 2,
         3, 4;
  Vector2d u(-1,1), v(2,0);
  std::cout << "Here is mat*mat:\n" << mat*mat << std::endl;
  std::cout << "Here is mat*u:\n" << mat*u << std::endl;
  std::cout << "Here is u^T*mat:\n" << u.transpose()*mat << std::endl;
  std::cout << "Here is u^T*v:\n" << u.transpose()*v << std::endl;
  std::cout << "Here is u*v^T:\n" << u*v.transpose() << std::endl;
  std::cout << "Let's multiply mat by itself" << std::endl;
  mat = mat*mat;
  std::cout << "Now mat is mat:\n" << mat << std::endl;

// Note: if you read the above paragraph on expression templates and are worried that doing m=m*m 
// might cause aliasing issues, be reassured for now: 
// Eigen treats matrix multiplication as a special case and takes care of introducing a temporary here, 
// so it will compile m=m*m as:

//    tmp = m*m;
//    m = tmp;

// Dot product and cross product
// For dot product and cross product, you need the dot() and cross() methods.
  std::cout << "***** Dot & Cross Product *****" << std::endl;
  Vector3d vv(1,2,3);
  Vector3d ww(0,1,2);
  cout << "Dot product: " << vv.dot(ww) << endl;
  double dp = vv.adjoint()*ww; // automatic conversion of the inner product to a scalar
  cout << "Dot product via a matrix product: " << dp << endl;
  cout << "Cross product:\n" << vv.cross(ww) << endl;
}

