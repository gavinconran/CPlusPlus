#include "Student.h"
#include <iostream>

// No-argument Student constructor
Student::Student()
    : course("[Unassigned course]")
{
    std::cout << "Hello from Student::Student()" << std::endl;
}

// Parameterised Student constructor
Student::Student(const std::string & name, int age, const std::string & course)
    : Person(name, age), course(course)
{
    std::cout << "Hello from Student::Student(string, int, string)" << std::endl;
}

void Student::displayCourse() const
{
    std::cout << course << std::endl;
}

/**
// You can initialize members of the base class by calling the base class constructor from your derived class.  
// It is recommended that you make the call to the base class constructor as the first thing in your derived class
//  to ensure that member variables in the base class are initialized before they are accessed or used in the derived class. 

// The way to call the base class constructor from your derived class is demonstrated here.

Student::Student():Person("Tom", "Thumb")
{
}


Student::~Student()
{
}

// this line will cause a compiler error    
// firstName member variable is declared as private in Person
firstName = "Tom";

**/
