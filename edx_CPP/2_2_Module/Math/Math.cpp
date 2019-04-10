// the compiler needs to know what functions are part of this class
#include "Math.h"

// The rest of the class contains the implementation details for calculating the power function
// using the concept of a scope resolution operator (::). used also in namespaces.

int Math::pow(int base, int exp) {

  int result = 1;

  for (int i = 0; i < exp; i++) { result = result * base; }

  return result;

};


