// $ g++ -o PersonTest PersonTest.cpp Person.cpp

#include <iostream>
#include "Person.h"
#include "Dog.h"

using namespace std;

int main()
{
  // create a Person instance using default constructor
  Person *pOne = new Person();

  // Create a Person instance using 2 argument constructor
  Person *pTwo = new Person("Tom", "Thumb");

  // Create a Person instance using 3 argument constructor
  Person *pThree = new Person("Tom", "Thumb", 15);

  Person p; // created at compile time

  Person &pRef = p;

  p.SayHello();

  p.SetFirstName("Gerry");
  cout << p.GetFirstName() << std::endl;

  // this line will output an invalid age message due to the 
  // validation check in the SetAge() function
  p.SetAge(-5);

  // pointer method of calling a member function
  pOne->SayHello();

  // reference method of calling a member function
  pRef.SayHello();

  return 0;
}

