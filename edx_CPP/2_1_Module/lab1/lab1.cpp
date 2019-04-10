#include <iostream>

using namespace std;

// 5) Create a function called PassByValue that accepts an integer argument.
void PassByValue(int num) {
  cout << "Inside PassByValue" << endl;
  num++;
  cout << "num = " << num << endl;
}

// 10) Create a function called PassByRef that accepts a reference variable as an argument
void PassByRef(int &num) {
  cout << "Inside PassByRef" << endl;
  num = 50;
  cout << "num = " << num << endl;
}

void PassByRefPointer(int *num) {
  cout << "Inside PassByRefPointer" << endl;
  *num = 60;
  cout << "num = " << *num << endl;
}

// 23) Create a simple class in your C++ application called Person.
class Person {

private:
  string name;
  int age;
  int height;
  int weight;

public:

  Person();

  Person(std::string nname, int aage, int hheight, int wweight) {
    name = nname;
    age = aage;
    height = hheight;
    weight = wweight;

    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "height: " << height << endl;
    cout << "weight: " << weight << endl;
  }

  std::string GetName() {
    return name;
  }
  int GetAge();
  int GetHeight();
  int GetWeight();

  void alterName(std::string nname) {
    name = nname;
  }

};

// 25) Create a function in your application called ModifyPerson() that accepts a Person object as an argument.
void ModifyPerson(Person *person) {
  // 29) Inside the ModifyPerson() function, change the value in the name member variable.
  person->alterName("Victoria");
}
  

int main() {

  // 2) In your main() function, create two variables
  int num1 = 3;
  int num2 = 5;
  int *pNum = &num2;

  cout << "num1 is equal to: " << num1 << endl;

  PassByValue(num1);

  cout << "num1 is equal to: " << num1 << endl;

  cout << "*pNum is equal to: " << *pNum << endl;

  PassByRef(*pNum);

  cout << "*pNum is equal to: " << *pNum << endl;

  PassByRefPointer(pNum);

  cout << "*pNum is equal to: " << *pNum << endl;

  // 17) Create a pointer variable to a double, and allocate memory for it using the new keyword.
  double *pDouble = new double;
  *pDouble = 10.0;

  cout << "*pDouble is equal to: " << *pDouble << endl;

  // 20) Deallocate the memory for that variable.
  delete pDouble;

  cout << "*pDouble is equal to: " << *pDouble << endl;

  // 26) Instantiate a Person object in your main() method and assign values to the member variables.
  Person *person = new Person("gavin", 52, 183, 100);

  // 28) Call the ModifyPerson() function, passing in your Person object you just created.
  ModifyPerson(person);

  // 30) Back in main(), output the values stored in the Person object you created.  Did the name change? 
  cout << "name: " << person->GetName() << endl;
  //cout << "age: " << age << endl;
  //cout << "height: " << height << endl;
  //cout << "weight: " << weight << endl;

  delete person;

}

