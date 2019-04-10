#include "Person.h"
#include <iostream>

// No-argument Person constructor
Person::Person()
    : name("[Unknown name]"), age(0)
{
    std::cout << "Hello from Person::Person()" << std::endl;
}

// Parameterised Person constructor
Person::Person(const std::string & name, int age)
    : name(name), age(age)
{
    std::cout << "Hello from Person::Person(string, int)" << std::endl;
}

// no need to use virtual keyword in .cpp file
void Person::display() const
{
    std::cout << name << ", " << age << std::endl;
}

Person::~Person()
{
    std::cout << "Goodbye from the Person destructor" << std::endl;
}
    

