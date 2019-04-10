// $ g++ -o PersonTest PersonTest.cpp Person.cpp Dog.cpp

#include <iostream>
#include "Person.h"
#include "Dog.h"

using namespace std;

int main()
{
  // Create a Person instance using 2 argument constructor
  Person *p = new Person("Tom", "Thumb");

  std::cout << "Person first name = " << p->GetFirstName() << std::endl;

  p->SayHello();

  Dog *d = new Dog("Fido", "Thumb");

  std::cout << "Dog first name = " << d->GetFirstName() << std::endl;

  d->SayHello();

  return 0;

}

 
