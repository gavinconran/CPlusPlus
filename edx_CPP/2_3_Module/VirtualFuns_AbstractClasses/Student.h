#pragma once
#include "Person.h" // Include the header file for the base class

class Student : public Person  // public inheritance
{
private:
    std::string course;

public:
    Student();
    Student(const std::string & name, int age, const std::string & course);

    // good to add virtual keyword to signature of functions overridden from base class
    virtual void display() const;

    virtual ~Student();
};
