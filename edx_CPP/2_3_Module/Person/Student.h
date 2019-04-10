#pragma once
#include "Person.h" // Include the header file for the base class

class Student : public Person  // public inheritance
{
private:
    std::string course;

public:
    Student();
    Student(const std::string & name, int age, const std::string & course);

    void displayCourse() const;
};
