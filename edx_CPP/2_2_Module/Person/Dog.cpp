#include "Dog.h"
#include <iostream>

Dog::Dog() {}

Dog::Dog(std::string fName, std::string lName) 
{
  this->firstName = fName;
  this->lastName = lName;
}

Dog::Dog(std::string fName, std::string lName, int age) 
{
  this->firstName = fName;
  this->lastName = lName;

  this->age = age;
}

Dog::~Dog() {

}

void Dog::SetFirstName(std::string fName){
  this->firstName = fName;
}

std::string Dog::GetFirstName() {
  return this->firstName;
}

void Dog::SetLastName(std::string lName) {
  this->lastName = lName;
}

std::string Dog::GetLastName() {
  return this->lastName;
}


void Dog::SetAge(int age) {
  if (age > 0) {
    this->age = age;
  } else {
    std::cout << "Please enter a valid age" << std::endl;
  }
}

void Dog::SayHello(){ 
  std::cout << "Woof, Woof" << std::endl;
}
