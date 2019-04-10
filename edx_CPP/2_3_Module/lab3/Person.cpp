#include "Person.h"
#include <iostream>

using namespace std;

// No-argument Person constructor
Person::Person()
    : first_name("[Unknown name]"), last_name("[Unknown name]"), race("[Unknown race]"), phone("[Unknown phone]"), age(0)
{
    cout << "Hello from Person::Person()" << endl;
}

// Parameterised Person constructor
Person::Person(const string & first_name, const string & last_name, const string & race, const string & phone, int age)
    : first_name(first_name), last_name(last_name), race(race), phone(phone), age(age)
{
    cout << "Hello from Person::Person(string, string, string, string, int)" << endl;
}

void Person::OutputAge() const
{
    cout << "I am " << age << " years old." << endl;
}

