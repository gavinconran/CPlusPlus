// $ g++ -o MathTest MathTest.cpp Math.cpp 

// MathTest.cpp: Defines the entry point for the console application.

#include "Math.h"
#include <iostream>

using namespace std;

int main() {

  //  Note the use of the scope resolution operator again (::) 
  // and that we did not create an instance of the Math class but simply called the function directly on the class itself. 
  // This is an example of a static class in action.
  int result = Math::pow(2, 10);

  cout << result << endl;

  return 0;

}
