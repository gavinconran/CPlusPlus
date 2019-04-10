#include "Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher() {}

Teacher::Teacher(string fName, string lName, int age, string address, string city, string phone)
{
  this->firstName = fName;
  this->lastName = lName;
  this->age = age;
  this->address = address;
  this->city = city;
  this->phoneNumber = phone;
}

Teacher::~Teacher() {

}

void Teacher::SetFirstName(string fName){
  this->firstName = fName;
}

string Teacher::GetFirstName() {
  return this->firstName;
}

void Teacher::SetLastName(string lName) {
  this->lastName = lName;
}

string Teacher::GetLastName() {
  return this->lastName;
}


void Teacher::SetAge(int age) {
  if (age > 0) {
    this->age = age;
  } else {
    std::cout << "Please enter a valid age" << std::endl;
  }
}

int Teacher::GetAge() {
  return this->age;
}

void Teacher::SetAddress(string address) {
  this->address = address;
}

string Teacher::GetAddress() {
  return this->address;
}

void Teacher::SetCity(string city) {
  this->city = city;
}

string Teacher::GetCity() {
  return this->city;
}

void Teacher::SetPhone(string phone) {
  this->phoneNumber = phone;
}

string Teacher::GetPhoneNumber(){
  return this->phoneNumber;
} 

void Teacher::SitInClass(){ 
  cout <<  "Sitting at front of class" << endl;
}

void Teacher::GradeStudent(){ 
  cout <<  "Student graded" << endl;
}
