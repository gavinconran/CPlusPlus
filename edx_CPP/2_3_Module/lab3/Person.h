#pragma once
    
#include <string>

using namespace std;
    
class Person
{
// Providing public getters and setters for these private member variables is the proper way to gain access to them from outside the class.      
private:
    int age;
// keep certain members of the base class private to the "outside world" but public to derived classes of that base class.  
// C++ provides the keyword protected, for this purpose.
protected:   
    string phone;
    
public:
    string first_name;
    string last_name;
    string race;
    Person();    
    Person(const string & first_name, const string & last_name, const string & race, const string & phone, int age);

    // pure virtual function
    virtual void OutputIdentity() const = 0;

    // virtual function
    virtual void OutputAge() const;
};
