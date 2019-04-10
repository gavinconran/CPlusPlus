#include "Student.h"
#include "Teacher.h"

int main()
{

    // 7) In your main.cpp file, instantiate an Student object and initialize the member variables with valid data
    Person *student1 = new Student("gavin", "conran", "human", "12345678", 52);
    student1->OutputIdentity(); // method inherited from base class
    student1->OutputAge();

    // 10) Instantiate a Teacher object in main.cpp and assign valid data to the member variables
    Person *teacher1 = new Teacher("mary", "cannife", "human", "12345678", 21);
    teacher1->OutputIdentity(); // method inherited from base class
    teacher1->OutputAge();

    return 0;
}
