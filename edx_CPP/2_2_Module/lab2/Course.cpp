#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include <iostream>

using namespace std;

Course::Course() {}

Course::Course(string courseName)
{
  this->courseName = courseName;
}

Course::~Course() {

}

void Course::SetCourseName(string courseName) {
  this->courseName = courseName;
}

string Course::GetCourseName() {
  return this->courseName;
}

void Course::SetTeacher(Teacher teacher) {
  this->teacher = teacher;
}

Teacher Course::GetTeacher() {
  return this->teacher;
}

void Course::AddStudents(Student student1, Student student2, Student student3) {
  this->students[0] = student1;
  this->students[1] = student2;
  this->students[2] = student3;
}
    
//Student[] Course::GetAllStudents() {
//  return this->students
//}

