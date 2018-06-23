// Columns and Rows
// Individual columns and rows are special cases of blocks. 
// Eigen provides methods to easily address them: .col() and .row().

// $ g++ -I ../eigen_dir -o exp2 02_ColsAndRows.cpp

#include <Eigen/Dense>
#include <iostream>
using namespace std;
int main()
{
  std::cout << "***** Columns & Rows *****" << std::endl;
  Eigen::MatrixXf m(3,3);
  m << 1,2,3,
       4,5,6,
       7,8,9;
  cout << "Here is the matrix m:" << endl << m << endl;
  cout << "2nd Row: " << m.row(1) << endl;
  m.col(2) += 3 * m.col(0);
  cout << "After adding 3 times the first column into the third column, the matrix m is:\n";
  cout << m << endl;

  // Corner Related Operations
  // Eigen also provides special methods for blocks that are flushed against one of the corners or sides of a matrix/array.    
  // For instance, .topLeftCorner() can be used to refer to a block in the top-left corner of a matrix.
  std::cout << "***** Corner Related Operations *****" << std::endl;
  Eigen::Matrix4f mm;
  mm << 1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10,11,12,
        13,14,15,16;
  cout << "mm.leftCols(2) =" << endl << mm.leftCols(2) << endl << endl;
  cout << "mm.bottomRows<2>() =" << endl << mm.bottomRows<2>() << endl << endl;
  mm.topLeftCorner(1,3) = mm.bottomRightCorner(3,1).transpose();
  cout << "After assignment, mm = " << endl << mm << endl;  

  // Block operations for vectors
  std::cout << "***** Block Operations for Vectors*****" << std::endl;
  Eigen::ArrayXf v(6);
  v << 1, 2, 3, 4, 5, 6;
  cout << "v.head(3) =" << endl << v.head(3) << endl << endl;
  cout << "v.tail<3>() = " << endl << v.tail<3>() << endl << endl;
  v.segment(1,4) *= 2;
  cout << "after 'v.segment(1,4) *= 2', v =" << endl << v << endl;

}
