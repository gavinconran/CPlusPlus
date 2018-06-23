#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;


int main()
{
  MatrixXf m(3,3);
  m << 1, 2, 3,
       4, 5, 6,
       7, 8, 9;

  cout << m << endl;
}




