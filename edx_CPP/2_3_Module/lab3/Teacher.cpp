#include "Teacher.h"
#include <iostream>

using namespace std;

// No-argument Student constructor
Teacher::Teacher()
{
    cout << "Hello from Teacher::Teacher()" << endl;
}

// Parameterised Student constructor
Teacher::Teacher(const string & first_name, const string & last_name, const string & race, const string & phone, int age)
    : Person(first_name, last_name, race, phone, age)
{
    cout << "Hello from Teacher::Teacher(string, string, string, string, int)" << endl;
}

void Teacher::OutputIdentity() const
{
    cout << "I am a teacher" << endl;

}

void Teacher::OutputAge() const
{
    cout << "I am a teacher and " << endl;

    Person::OutputAge();  
}



