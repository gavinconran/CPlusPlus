#pragma once
#include "Person.h" // Include the header file for the base class

class Teacher : public Person  // public inheritance
{
public:
    Teacher();
    Teacher(const string & first_name, const string & last_name, const string & race, const string & phone, int age);

    virtual void OutputIdentity() const;

    virtual void OutputAge() const;
};
