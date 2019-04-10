#include "Student.h"

void demoFunction1(Person * ptr);
void demoFunction2(Person & ref);

int main()
{

  // principle of substuitability, in this case, type Student substituted for Person
  Person * p = new Student("jane smith", 18, "chemistry");

  // calls Student's display method at run-time, i.e. dynamic binding
  // virtual keyword allows for polymorphism
  p->display();

  demoFunction1(p);
  demoFunction2(*p);

  delete p;

  return 0;
}

void demoFunction1(Person * ptr)
{
  // ptr points to a Student object rather than a Person object
  // another example of polymorphism
  ptr->display();
}

void demoFunction2(Person & ptr)
{
  // polymorphism again
  ptr.display();
}




