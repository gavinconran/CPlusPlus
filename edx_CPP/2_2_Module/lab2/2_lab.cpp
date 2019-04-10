// $ g++ -o 2_lab 2_lab.cpp Course.cpp Student.cpp Teacher.cpp

#include <iostream>
#include "Course.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
  
  // 1) Instantiate three Student objects called Student1, Student2, and Student3, provide values for the member variables.
  Student *Student1 = new Student("gavin", "conran", 52, "kernan gardens", "portadown", "02838336028");
  Student *Student2 = new Student("victoria", "conran", 15, "kew gardens road", "richmond", "012345678");
  Student *Student3 = new Student("peter", "pan", 1000, "hyde park", "london", "6543210");

  // 2) Instantiate a Course object called Intermediate C++.
  Course *course = new Course("Intermediate C++");

  // 3) Add your three students to this Course object.
  course->AddStudents(*Student1, *Student2, *Student3);

  // 4) Instantiate at least one Teacher object.
  Teacher *teacher = new Teacher("mary", "cannife", 60, "some street", "some town", "1111111");

  // 5) Add that Teacher object to your Course object
  course->SetTeacher(*teacher);

  // 6) Using cout statements where appropriate, follow these instructions:
  // 6a) Output the name of the course
  cout << "Course Name: " << course->GetCourseName() << endl;

  // 6b) Call the GradeStudent() method on the Teacher object
  teacher->GradeStudent();

  // 6c) Leave your application open and answer the Lab assessment questions
  teacher->SitInClass();
  
  Student stud1; // values will be initialised to default values for the data types
  cout << stud1.GetFirstName() << endl;
  cout << stud1.GetLastName() << endl;
  cout << stud1.GetAge() << endl;

  return 0;

}
