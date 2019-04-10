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

void Student::display() const
{
    // call base-class version of display.
    // n.b.: Java uses keyword "super" for the base class.
    // This won't work in C++ as you can inherit from multiple base classes
    Person::display();

    // now display the student-related info.
    std::cout << course << std::endl;
}

Student::~Student()
{
    // you cannot invole your parent's destructor. This is done automatically.
    std::cout << "Goodbye from the Student destructor" << std::endl;
}



