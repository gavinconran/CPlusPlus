#pragma once
    
#include <string>
   
class Person
{
// Providing public getters and setters for these private member variables is the proper way to gain access to them from outside the class.      
private:
    std::string name;
// keep certain members of the base class private to the "outside world" but public to derived classes of that base class.  
// C++ provides the keyword protected, for this purpose.
protected:   
    int age;
    
public:
    Person();    
    Person(const std::string & name, int age);

    // virtual keyword means that function is overridable
    virtual void display() const;

    // should havs a virtual destructor id class has at least one virtual function
    virtual ~Person();
};
