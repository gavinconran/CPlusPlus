// Using block operations
// $ g++ -I ../eigen_dir -o exp1 01_BlockOps.cpp

#include <Eigen/Dense>
#include <iostream>
using namespace std;
using namespace Eigen;
int main()
{
  std::cout << "***** Block Operations - read *****" << std::endl;
  Eigen::MatrixXf m(4,4);
  m <<  1, 2, 3, 4,
        5, 6, 7, 8,
        9,10,11,12,
       13,14,15,16;
  cout << "Block in the middle" << endl;
  cout << m.block<2,2>(1,1) << endl << endl;
  for (int i = 1; i <= 3; ++i)
  {
    cout << "Block of size " << i << "x" << i << endl;
    cout << m.block(0,0,i,i) << endl << endl;
  }

  // In the above example the .block() function was employed as a rvalue, i.e. it was only read from. 
  // However, blocks can also be used as lvalues, meaning that you can assign to a block.
  std::cout << "***** Block Operations - write *****" << std::endl;
  Array22f ml;
  ml << 1,2,
        3,4;
  Array44f a = Array44f::Constant(0.6);
  cout << "Here is the array a:" << endl << a << endl << endl;
  a.block<2,2>(1,1) = ml;
  cout << "Here is now a with m copied into its central 2x2 block:" << endl << a << endl << endl;
  a.block(0,0,2,3) = a.block(2,1,2,3);
  cout << "Here is now a with bottom-right 2x3 block copied into top-left 2x2 block:" << endl << a << endl << endl;  


}
