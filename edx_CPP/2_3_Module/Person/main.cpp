#include "Student.h"

int main()
{

    // Create a Student object using the no-argument constructor
    Student student1;
    student1.displayNameAge(); // method inherited from base class
    student1.displayCourse();

    // Create a Student object using the parameterised constructor
    Student student2("Jane smith", 18, "physics");
    student2.displayNameAge();
    student2.displayCourse();


 
/*    
    // this line will generate a compiler error
    // The reason is the public inheritance rule and the fact that the firstName member variable is declared as private in Person.
    student1.firstName = "Tom";

    // this line is ok
    // student1.SayHello() function call will work as SayHello() is a public function.
    student1.SayHello();
*/

    return 0;
}
