#pragma once

#include <string>

class Dog {

  private:
    std::string firstName;
    std::string lastName;

    int age;

  public:
    // overloading constructors
    // Default constructor
    Dog();

    // 2 param constructor
    Dog(std::string fName, std::string lName);

    // 3 param constructor
    Dog(std::string fName, std::string lName, int age);

    // Destructor
    ~Dog();

    // Setter & Getters
    void SetFirstName(std::string fName);
    std::string GetFirstName();

    void SetLastName(std::string lName);
    std::string GetLastName(); 

    void SetAge(int age);
    int GetAge();

    void SayHello();

};



