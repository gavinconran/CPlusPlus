#pragma once
#include "Person.h" // Include the header file for the base class

class Student : public Person  // public inheritance
{
public:
    Student();
    Student(const string & first_name, const string & last_name, const string & race, const string & phone, int age);

    virtual void OutputIdentity() const;

    virtual void OutputAge() const;
};
