// Math.h
// Header file for the Math class


// preprocessor directive that tells the compiler to only include this header once, 
// regardless of how many times it has been imported in the program.
#pragma once

// Math class definition
// static keyword  is an indicator that we do not have to instantiate the class to use it in our program. 
// class Math is a utility class and therefore we want it to be static 
// so we don't have to create an instance each time we want to use functionality in that class.
// WARNING:  removed "static" keyword in front of keyword class
class Math {

  public:

  // given base and exponent, calculate value.
  // method is also using the static designation.  
  // In order to call the function from a static class, the function must also be static.
  static int pow(int base, int exp);

  // declaration of the Math class ends with a semicolon after the closing curly brace
};


