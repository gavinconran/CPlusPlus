#pragma once

#include <string>

using namespace std;


class Student {

  private:
    string firstName;
    string lastName;
    int age;
    string address;
    string city;
    string phoneNumber;

  public:
    // overloading constructors
    // Default constructor
    Student();

    // 6 param constructor
    Student(string fName, string lName, int age, string address, string city, string phone);

    // Destructor
    ~Student();

    // Setter & Getters
    void SetFirstName(string fName);
    string GetFirstName();

    void SetLastName(string lName);
    string GetLastName(); 

    void SetAge(int age);
    int GetAge();

    void SetAddress(string address);
    string GetAddress();

    void SetCity(string city);
    string GetCity();

    void SetPhone(string phone);
    string GetPhoneNumber(); 

    void SitInClass();

};
