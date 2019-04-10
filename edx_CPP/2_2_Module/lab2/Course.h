#pragma once

#include <string>
#include "Course.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;


class Course {

  private:
    string courseName;
    Student students[3];
    Teacher teacher;

  public:
    // overloading constructors
    // Default constructor
    Course();

    // 1 param constructor
    Course(string courseName);

    // Destructor
    ~Course();

    // Setter & Getters
    void SetCourseName(string courseName);
    string GetCourseName();

    void SetTeacher(Teacher teacher);
    Teacher GetTeacher();

    void AddStudents(Student student1, Student student2, Student student3);
    //Student[] GetAllStudents();

};


