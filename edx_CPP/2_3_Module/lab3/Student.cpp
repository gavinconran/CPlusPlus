#include "Student.h"
#include <iostream>

using namespace std;

// No-argument Student constructor
Student::Student()
{
    cout << "Hello from Student::Student()" << endl;
}

// Parameterised Student constructor
Student::Student(const string & first_name, const string & last_name, const string & race, const string & phone, int age)
    : Person(first_name, last_name, race, phone, age)
{
    cout << "Hello from Student::Student(string, string, string, string, int)" << endl;
}

/*
void Student::OutputIdentity() const
{
    cout << "I am a student" << endl;
}
*/
void Student::OutputAge() const
{
    cout << "I am a student and " << endl;

    Person::OutputAge();  
}



