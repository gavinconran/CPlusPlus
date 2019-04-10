#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {}

Student::Student(string fName, string lName, int age, string address, string city, string phone)
{
  this->firstName = fName;
  this->lastName = lName;
  this->age = age;
  this->address = address;
  this->city = city;
  this->phoneNumber = phone;
}

Student::~Student() {

}

void Student::SetFirstName(string fName){
  this->firstName = fName;
}

string Student::GetFirstName() {
  return this->firstName;
}

void Student::SetLastName(string lName) {
  this->lastName = lName;
}

string Student::GetLastName() {
  return this->lastName;
}


void Student::SetAge(int age) {
  if (age > 0) {
    this->age = age;
  } else {
    std::cout << "Please enter a valid age" << std::endl;
  }
}

int Student::GetAge() {
  return this->age;
}

void Student::SetAddress(string address) {
  this->address = address;
}

string Student::GetAddress() {
  return this->address;
}

void Student::SetCity(string city) {
  this->city = city;
}

string Student::GetCity() {
  return this->city;
}

void Student::SetPhone(string phone) {
  this->phoneNumber = phone;
}

string Student::GetPhoneNumber(){
  return this->phoneNumber;
} 

void Student::SitInClass(){ 
  cout <<  "Sitting in main theater" << endl;
}
